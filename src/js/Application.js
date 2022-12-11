import 'regenerator-runtime/runtime'
import EventEmitter from "eventemitter3";
import image from "../images/planet.svg";

export default class Application extends EventEmitter {
    static get events() {
        return {
            READY: "ready",
        };
    }

    constructor() {
        super();
        this._loading = document.querySelector('progress');
        this._startLoading();
        this._create();

        this.emit(Application.events.READY);
    }

    async _load() {
        async function getData(point) {
            const url = new URL(String(point));
            const promise = await fetch(url, {
                method: "GET",
            });
            return await promise.json();
        };

        const planetsArray = [];
        let data = await getData('https://swapi.boom.dev/api/planets');

        planetsArray.push(data.results);

        while (this._checkIfNext(data) !== true) {
            const currentData = await getData(data.next);
            planetsArray.push(currentData.results);
            data = await currentData;
        }

        this._stopLoading();

        return planetsArray;
    };


    _checkIfNext(obj) {
        if (obj.next !== null) {
            return false;
        } else {
            return true;
        };
    };

    async _create() {
        const box = document.createElement("div");
        box.classList.add("box");

        const planets = await this._load();
        planets.forEach(element => {
            element.forEach(planet => {
                const name = planet.name;
                const terrain = planet.terrain;
                const population = planet.population;
                box.innerHTML += this._render({ name, terrain, population });
            })
        })

        document.body.querySelector(".main").appendChild(box);

    };

    _startLoading() {
        document.querySelector('progress').style.display = 'block';
    }

    _stopLoading() {
        document.querySelector('progress').style.display = 'none';
    }

    _render({ name, terrain, population }) {
        return `
                <article class="media">
                    <div class="media-left">
                        <figure class="image is-64x64">
                        <img src="${image}" alt="planet">
                        </figure>
                    </div>
                    <div class="media-content">
                        <div class="content">
                        <h4>${name}</h4>
                        <p>
                            <span class="tag">${terrain}</span> 
                            <span class="tag">${population}</span>
                            <br>
                        </p>
                        </div>
                    </div>
                </article>
                    `;
    };
};