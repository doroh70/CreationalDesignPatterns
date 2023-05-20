#ifndef SHAPEFACTORY_H_INCLUDED
#define SHAPEFACTORY_H_INCLUDED

#include "Circle.h"
#include "Shape.h"
#include "Square.h"

class ShapeFactory {
 public:
  virtual Shape* createShape() = 0;
};

#endif //SHAPEFACTORY_H_INCLUDED