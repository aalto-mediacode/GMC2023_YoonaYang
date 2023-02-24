#include "Particle.hpp"

//--------------------------------------------------------------
void Particle::setup(glm::vec3 myPosV, float boxSize){
    posV = myPosV;
    mySize=boxSize;
}

//--------------------------------------------------------------
void Particle::update(){

}

//--------------------------------------------------------------
void Particle::draw(){
    ofSetColor(0,0,0);
    ofNoFill();
    ofDrawBox(posV,mySize,mySize,mySize);
}
