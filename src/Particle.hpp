#pragma once

#include "ofMain.h"

class Particle {
    
public:
    void setup (glm::vec3 myPosV, float boxSize);
    void update();
    void draw();

    glm::vec3 posV;
    float mySize;
};
