//
//  Spring.h
//  mySketch0607_01
//
//  Created by 入江信之介 on 2014/06/07.
//
//

#ifndef __mySketch0607_01__Spring__
#define __mySketch0607_01__Spring__

#include <iostream>
#include "ofMain.h"
#include "Particle.h"

class Spring{
public:
    
    Spring();
    
    Particle *particleA;
    Particle *particleB;
    
    float distance;
    float springiness;
    
    void update();
    void draw();
};

#endif /* defined(__mySketch0607_01__Spring__) */
