import Car from "./Car.mjs"

class CarBuilder {
    constructor() {
        this.car = new Car();
    }
    addColor(color) {
        this.car.color = color;
        return this;
    }
    addBrand(brand) {
        this.car.brand = brand;
        return this;
    }
    addRims(rims) {
        this.car.rims = rims;
        return this;
    }
    buildCar() {
        return this.car;
    }
}

export default CarBuilder;