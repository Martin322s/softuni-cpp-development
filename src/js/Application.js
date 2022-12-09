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

        this._loading = document.querySelector("progress");
        this._pages = [];

        this._startLoading().then((e) => {
            for (let page of this._pages) {
                for (let planet of page.results) {
                    const getProps = ({ name, terrain, population }) => ({
                        name,
                        terrain,
                        population,
                    });
                    this._create(getProps(planet));
                }
            }
        });

        this.emit(Application.events.READY);
    }

    async _load(url) {
        if (!url) return;
        let response = await fetch(url);
        let data = await response.json();
        this._pages.push(data);
        await this._load(data.next);
    }

    _stopLoading() {
        this._loading.style.visibility = "hidden";
    }

    async _startLoading() {
        this._loading.style.visibility = "visible";
        await this._load("https://swapi.boom.dev/api/planets");
        this._stopLoading();
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
</article>
    `;
    }

    _create({ name, terrain, population }) {
        const box = document.createElement("div");
        box.classList.add("box");
        box.innerHTML = this._render({
            name: name,
            terrain: terrain,
            population: population,
        });

        document.body.querySelector(".main").appendChild(box);
    }
}