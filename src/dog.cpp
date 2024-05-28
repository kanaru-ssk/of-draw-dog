#include "dog.h"

Dog::Dog() {
  ofSetCircleResolution(64);
  x_ = 0;
  y_ = 0;
  size_ = 100;
}

Dog::Dog(int x, int y, int size) {
  ofSetCircleResolution(64);
  x_ = x;
  y_ = y;
  size_ = size;
}

int Dog::getX() { return x_; }
void Dog::setX(int x) { x_ = x; }

int Dog::getY() { return y_; }
void Dog::setY(int y) { y_ = y; }

int Dog::getSize() { return size_; }
void Dog::setSize(int size) { size_ = size; }

void Dog::draw() {
  ofSetColor(100);
  // face
  ofDrawCircle(x_, y_, size_ / 2);
  // left ear
  ofDrawTriangle(x_ - size_ * 50 / 200, y_ - size_ * 130 / 200,
                 x_ - size_ * 90 / 200, y_ - size_ * 40 / 200,
                 x_ - size_ * 10 / 200, y_ - size_ * 40 / 200);
  // the right ear
  ofDrawTriangle(x_ + size_ * 50 / 200, y_ - size_ * 130 / 200,
                 x_ + size_ * 90 / 200, y_ - size_ * 40 / 200,
                 x_ + size_ * 10 / 200, y_ - size_ * 40 / 200);

  ofSetColor(0);
  // left eye
  ofDrawCircle(x_ - size_ * 35 / 200, y_ + size_ * 10 / 200, size_ / 20);
  // right eye
  ofDrawCircle(x_ + size_ * 35 / 200, y_ + size_ * 10 / 200, size_ / 20);
  // nose
  ofDrawCircle(x_, y_ + size_ * 30 / 200, size_ / 20);
}
