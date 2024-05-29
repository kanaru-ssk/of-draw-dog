#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
  ofSetBackgroundColor(255);
  ofSetCircleResolution(64);
  dog = Dog(200, 200, 200);
}

//--------------------------------------------------------------
void ofApp::draw() { dog.draw(); }

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
  if (key == OF_KEY_LEFT) {
    dog.moveX(-10);
  } else if (key == OF_KEY_RIGHT) {
    dog.moveX(+10);
  } else if (key == OF_KEY_UP) {
    dog.moveY(-10);
  } else if (key == OF_KEY_DOWN) {
    dog.moveY(+10);
  } else if (key == '+') {
    dog.adjustSize(10);
  } else if (key == '-') {
    dog.adjustSize(-10);
  }
}
