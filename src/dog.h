#pragma once

#include "ofMain.h"

class Dog {
 public:
  Dog() : x_(0), y_(0), size_(100) {}
  Dog(int x, int y, int size) : x_(x), y_(y), size_(size) {}

  int getX() const { return x_; }
  void setX(int x) { x_ = x; }
  int getY() const { return y_; }
  void setY(int y) { y_ = y; }
  int getSize() const { return size_; }
  void setSize(int size) { size_ = size; }

  void draw() const;

 private:
  int x_, y_, size_;
};