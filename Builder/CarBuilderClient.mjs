import CarBuilder from "./CarBuilder.mjs";

//Build Car with only color
const builder1 = new CarBuilder();
const onlyColoredCar = builder1.addColor('Red').buildCar();
console.log(onlyColoredCar);

//Build Car with color and brand
const builder2 = new CarBuilder();
const colorBrandCar = builder2.addColor('Blue').addBrand('Ford').buildCar();
console.log(colorBrandCar);

//Build Car with color brand , and rims.
const builder3 = new CarBuilder();
const fullyrealizedCar = builder3.addColor('Grey').addBrand('Tesla').addRims('Steel').buildCar();
console.log(fullyrealizedCar);