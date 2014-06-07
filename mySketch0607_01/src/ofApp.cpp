#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    
    particle_a.setup(400, 400, 0, 0);
    particle_b.setup(500, 500, 0, 0);
    
    mySpring.distance = 100;
    mySpring.springiness = 0.1f;
    mySpring.particleA = &particle_a;
    mySpring.particleB = &particle_b;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    particle_a.resetForce();
    particle_b.resetForce();
    
    mySpring.update();
    
    particle_a.bounceOffWalls();
    particle_a.update();
    
    particle_b.bounceOffWalls();
    particle_b.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255, 255, 255);
    
    mySpring.draw();
    
    particle_a.draw();
    particle_b.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
