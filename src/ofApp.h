#pragma once

#include "dog.h"
#include "ofMain.h"

class ofApp : public ofBaseApp {
 public:
  void setup() override;
  void draw() override;

  void keyPressed(int key) override;

 private:
  Dog dog;
};
