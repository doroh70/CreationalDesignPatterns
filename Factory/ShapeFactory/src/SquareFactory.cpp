#include "ShapeFactory.h"
#include "SquareFactory.h"
#include "Shape.h"
#include "Square.h"

Shape* SquareFactory::createShape(){
    return new Square();
}
