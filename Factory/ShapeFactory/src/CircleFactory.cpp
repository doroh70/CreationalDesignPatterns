#include "ShapeFactory.h"
#include "CircleFactory.h"
#include "Shape.h"
#include "Circle.h"

Shape* CircleFactory::createShape(){
    return new Circle();
}



