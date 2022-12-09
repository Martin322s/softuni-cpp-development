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
        this._loading = document.querySelector('.progress');
        this._startLoadig(true);
        this._create();
        this.emit(Application.events.READY);
    }

    async _load() {
        const res = await fetch('https://swapi.boom.dev/api/planets');
        const planets = await res.json();
        return planets.results;
    }

    _create() {
        this._load()
            .then(planets => {
                planets.forEach(element => {
                    const box = document.createElement("div");
                    box.classList.add("box");
                    box.innerHTML = this._render({
                        name: element.name,
                        terrain: element.terrain,
                        population: element.population,
                    });
                    this._stopLoadig(false);
                    document.body.appendChild(box);
                });
            });
    }

    _startLoadig(isLoading) {
        if (isLoading) {
            this._loading.style.display = 'block';
        } else {
            this._loading.style.display = 'none';
        }
    }

    _stopLoadig(isLoading) {
        if (isLoading) {
            this._loading.style.display = 'block';
        } else {
            this._loading.style.display = 'none';
        }
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
                                <span class="tag">${terrain}</span> <span class="tag">${population}</span>
                                <br>
                            </p>
                        </div>
                    </div>
                </article>`;
    }
}
