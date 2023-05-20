#ifndef SQUAREFACTORY_H_INCLUDED
#define SQUAREFACTORY_H_INCLUDED

#include "Circle.h"
#include "Shape.h"
#include "Square.h"
#include "ShapeFactory.h"

class SquareFactory : public ShapeFactory {
 public:
  virtual Shape* createShape();
};

#endif //SQUAREFACTORY_H_INCLUDED