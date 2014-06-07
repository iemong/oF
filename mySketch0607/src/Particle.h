//
//  Particle.h
//  mySketch0607
//
//  Created by 入江信之介 on 2014/06/07.
//
//

#ifndef __mySketch0607__Particle__
#define __mySketch0607__Particle__

#include <iostream>
#include "ofMain.h"

class Particle{
public:
    void setup(ofVec3f _position, ofVec3f _velocity);
    void resetForce();
    void addForce(ofVec3f _force);
    void updateForce();
    void updatePos();
    void checkBounds(float xmin, float ymin, float xmax, float ymax);
    void draw();
    
    
    ofVec3f position;
    ofVec3f velocity;
    ofVec3f force;
    float friction = 0.01;
    float radius;
};







#endif /* defined(__mySketch0607__Particle__) */
