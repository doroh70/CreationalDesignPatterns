#include "ShapeFactory.h"
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

int main(){
    ShapeFactory* test = new ShapeFactory();
    test->createShape(CIRCLE)->getShape();

    return 0;
}