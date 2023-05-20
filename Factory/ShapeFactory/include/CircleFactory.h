#ifndef CIRCLEFACTORY_H_INCLUDED
#define CIRCLEFACTORY_H_INCLUDED

#include "Circle.h"
#include "Shape.h"
#include "Square.h"
#include "ShapeFactory.h"

class CircleFactory : public ShapeFactory {
 public:
  virtual Shape* createShape();
};

#endif //CIRCLEFACTORY_H_INCLUDED