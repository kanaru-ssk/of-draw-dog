#pragma once

#include "ofMain.h"

class Dog {
 public:
  Dog() : x_(0), y_(0), size_(100) {}
  Dog(int x, int y, int size) : x_(x), y_(y), size_(size) {}

  void moveX(int x) { x_ += x; }
  void moveY(int y) { y_ += y; }
  void adjustSize(int delta) { size_ += delta; }

  void draw() const;

 private:
  int x_, y_, size_;
};