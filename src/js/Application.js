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
    this._loading = document.querySelector(".progress");
    this._findAllPlanets(1);

    this.emit(Application.events.READY);
  }

  _findAllPlanets(pageNumber) {
      let hasFinished = true;

      this._load(pageNumber)
      .then(data => {
        hasFinished = Object.is(data.next, null);
        return data.results
      })
      .then(planets => {
        // Do something with the planets
        // console.log(planets)
        planets.forEach(p => this._create(p))
        
        if(!hasFinished){
          return this._findAllPlanets(pageNumber + 1);
        }
      })
      .catch(err => console.error(err.message))
  }

  async _load(pageNumber){ 
    // Fetch from all pages https://swapi.boom.dev/api/planets?page=
    this._startLoading();
    try {
      let responce = await fetch(`https://swapi.boom.dev/api/planets?page=${pageNumber}`)
      if(responce.status === 200){
        this._stopLoading();
        return await responce.json();
      }
      throw new Error("Can't fetch resource!");
    }
    catch(err){
      console.error(err.message)
    }
    finally {
      this._stopLoading();  
    }
  }

  _startLoading(){
    this._loading.style.visibility = "visible"; 
  }

  _stopLoading(){
    this._loading.style.visibility = "hidden"; 
  }

  _create({name, terrain, population}){
    // For rendering of boxes (planets)
    const box = document.createElement("div");
    box.classList.add("box");
    box.innerHTML = this._render({
      name,
      terrain,
      population
    });

    document.body.querySelector(".main").appendChild(box);
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