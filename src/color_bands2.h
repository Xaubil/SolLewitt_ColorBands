//
//  color_bands2.h
//  SolLewitt_ColorBands
//
//  Created by Tin Tin on 2017-06-18.
//
//

#ifndef color_bands2_h
#define color_bands2_h

#include "ofMain.h"
#include "constants.h"
#include "cb2_border.h"
#include "cband_vertical.h"
#include "cband_arc.h"
#include "ofxLayerMask.h"

using namespace Constants;

class ColorBands2 : public ofBaseApp {
    
public:
    void            setup();
    void            draw();
    void            keyPressed(int key);
    
private:
    ofxLayerMask    mask1, mask2, mask3;
    CB2Border1      border1;
    CB2Border2      border2;
    CB2Border3      border3;
    CBandVertical   band1;
    CBandArc        band2;
    CBandArc        band3;
    int             framerate;
    int             mode;
    int             last_color;
    float           line_width;
};

#endif /* color_bands2_h */
