#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(64);
    ofBackground(0,0,0);
    x = ofGetWidth()/2;
    y = ofGetHeight()/2;
    x1 = x;
    y1 = y;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    x += 1;
    y += 1;
    
    }

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i = 0; i < 255; i++) {
        ofSetColor(255, 510-i, 255-i, 255-i);
        ofCircle(ofGetWidth()/2,ofGetHeight()/2, 770-i*3);
    }
    ofSetColor(255, 0, 100,50);
    ofTranslate(100, -200);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    for (int j = 0; j < 360; j++) {
        
        ofRotate(j, 0, 0, 1);
        for (int i = 0; i < 90; i++) {
            //ofLine(x1+x1/2*cos(i), y1+y1/2*sin(i), x1, y1);
            if (i > 1) {
                ofTranslate(400*cos(i), 400*sin(i));
                noisex = (int)ofRandom(10);
                noisey = (int)ofRandom(10);
                ofLine(x1/10*cos(i)+noisex, y1/10*sin(i)+noisey, x1/10*sin(i-1), y1/10*sin(i-1));
                ofTriangle(x1/10*cos(i)+noisex, y1/10*sin(i)+noisey, x1/10*sin(i-1), y1/10*sin(i-1),x1/10*sin(i), y1/10*sin(i));
            }
            
        }
    }
    
    
    
    
    
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
