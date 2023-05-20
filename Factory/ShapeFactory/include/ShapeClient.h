#ifndef SHAPECLIENT_H_INCLUDED
#define SHAPECLIENT_H_INCLUDED

#include <string>
#include "Shape.h"

class ShapeClient {
 public:
  enum ShapeType { Circle, Square };
  Shape* getShape(ShapeType shape);
};

#endif  // SHAPECLIENT_H_INCLUDED