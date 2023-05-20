#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include <iostream>

#include "Shape.h"

class Circle : public Shape {
 public:
  virtual std::string description();
};

#endif  // CIRCLE_H_INCLUDED