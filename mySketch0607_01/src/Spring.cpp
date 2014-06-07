//
//  Spring.cpp
//  mySketch0607_01
//
//  Created by 入江信之介 on 2014/06/07.
//
//

#include "Spring.h"

//---------------------------------------------------------------------
Spring::Spring(){
    particleA = NULL;
    particleB = NULL;
    
}

//---------------------------------------------------------------------
void Spring::update(){
    if ((particleA == NULL) || (particleB == NULL)) {
        return;
    }
    
    ofVec2f pta = particleA->position;
    ofVec2f ptb = particleB->position;
    
    float theirDistance = (pta - ptb).length();
    float springForce = (springiness * (distance - theirDistance));
    
    ofVec2f frcToAdd = (pta - ptb).normalized() * springForce;
    
    particleA->addForce(ofVec2f(frcToAdd.x, frcToAdd.y));
    particleB->addForce(ofVec2f(-frcToAdd.x, -frcToAdd.y));
}

//---------------------------------------------------------------------
void Spring::draw(){
    if ((particleA == NULL) || (particleB == NULL)) {
        return;
    }
    
    ofLine(particleA->position.x, particleA->position.y, particleB->position.x, particleB->position.y);
}