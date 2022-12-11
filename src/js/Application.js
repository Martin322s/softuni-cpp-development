import EventEmitter from "eventemitter3";
import image from "../images/planet.svg";
import 'regenerator-runtime/runtime'

export default class Application extends EventEmitter {
    static get events() {
        return {
            READY: "ready",
        };
    }

    constructor() {
        super();
        this._loading = document.querySelector("progress")
        this._startLoading();
        this.emit(Application.events.READY);
    }

    async _load() {
        const API_URL = "https://swapi.boom.dev/api/planets"
        let planets = [];
        const response = await fetch(API_URL)
        let { next, results } = await response.json();

        planets = [...results]

        while (next !== null) {
            const response = await fetch(next)
            const result = await response.json();
            planets = [...planets, ...result.results]
            next = result.next;
        }

        planets.forEach(({ name, terrain, population }) => this._create(name, terrain, population))
        this._stopLoading();
    }

    _create(name, terrain, population) {
        const box = document.createElement("div");
        box.classList.add("box");
        box.innerHTML = this._render({
            name: name,
            terrain: terrain,
            population: population,
        });

        document.body.querySelector(".main").appendChild(box);
    }

    async _startLoading() {
        await this._load();
    }

    _stopLoading() {
        this._loading.style.visibility = "hidden"
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
}