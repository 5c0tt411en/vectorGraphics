#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetWindowShape(WIDTH / scale, HEIGHT / scale);
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    string s;
    s = ofToString(ofGetHours()) + ofToString(ofGetMinutes()) + ".ai";
    if (loop) {
        vg.beginEPS(s);
        
        /*===========================code===========================*/
        for (int i = 0; i < 5000; i++) {
            vg.setColor(ofRandom(255), ofRandom(255), ofRandom(255));
            vg.rect(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), ofRandom(5), ofRandom(5));
        }
        /*===========================code===========================*/
        vg.endEPS();
        loop = false;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == ' ') {
        loop = true;
    }
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
