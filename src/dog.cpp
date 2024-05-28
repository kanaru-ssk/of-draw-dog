#include "dog.h"

void Dog::draw() const {
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
