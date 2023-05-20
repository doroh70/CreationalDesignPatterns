#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

#include <iostream>

#include "Circle.h"

class Square : public Shape {
 public:
  virtual std::string description();
};

#endif  // SQAURE_H_INCLUDED