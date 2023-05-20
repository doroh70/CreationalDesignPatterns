#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#include <string>
class Shape {
 public:
  virtual std::string description() = 0;
};

#endif  // SHAPE_H_INCLUDED