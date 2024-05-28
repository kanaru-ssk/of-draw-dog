#pragma once

#include "ofMain.h"

class Dog {
 public:
  Dog();
  Dog(int x, int y, int size);
  int getX();
  void setX(int x);
  int getY();
  void setY(int y);
  int getSize();
  void setSize(int size);
  void draw();

 private:
  int x_, y_, size_;
};