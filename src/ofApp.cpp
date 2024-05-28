#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
  ofSetBackgroundColor(255);
  ofSetCircleResolution(64);
  dog = Dog(200, 200, 200, 100);
}

//--------------------------------------------------------------
void ofApp::draw() { dog.draw(); }

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
  if (key == OF_KEY_LEFT) {
    dog.setX(dog.getX() - 10);
  } else if (key == OF_KEY_RIGHT) {
    dog.setX(dog.getX() + 10);
  } else if (key == OF_KEY_UP) {
    dog.setY(dog.getY() - 10);
  } else if (key == OF_KEY_DOWN) {
    dog.setY(dog.getY() + 10);
  } else if (key == '+') {
    dog.setSize(dog.getSize() + 10);
  } else if (key == '-') {
    dog.setSize(dog.getSize() - 10);
  }
}
