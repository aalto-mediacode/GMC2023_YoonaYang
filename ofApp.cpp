#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    cam.setAutoDistance(5000);
    ofBackground(255,255,255);
    boxSize = 30;
//    cubePosV={ofGetWidth()/2,ofGetHeight()/2,0};
    cubePosV={0,0,0};
    prevMouseV={0,0};
    clampedDist={0,0};
}
//--------------------------------------------------------------
void ofApp::update(){}
//--------------------------------------------------------------
void ofApp::draw(){
    light.enable();
    cam.begin();
    for(int i=0; i< myParticle.size(); i++){
        myParticle[i].draw();
    }
    cam.end();
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){}
//--------------------------------------------------------------
void ofApp::keyReleased(int key){}
//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){}
//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){}
//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    mouseV={x,y};
    mouseDistV=mouseV-prevMouseV;
    glm::vec2 clampedDist={ofClamp(mouseDistV.x,-1,1),ofClamp(mouseDistV.y,-1,1)};
    cubePosV={cubePosV.x+clampedDist.x*boxSize,cubePosV.y+clampedDist.y*boxSize,cubePosV.z+boxSize};
    cout << clampedDist << endl;
    Particle newParticle;
    newParticle.setup(cubePosV, boxSize);
    myParticle.push_back(newParticle);
    prevMouseV=mouseV;
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
