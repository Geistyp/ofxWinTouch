//
//  ofBaseTouchApp.h
//  Blooms
//
//  Created by rockwell on 10/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#pragma once
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif

#include "ofMain.h"
#include "ofEvents.h"

class ofBaseTouchApp : public ofBaseApp
{
public:
    
    virtual void twoFingerTap(){}
    virtual void twoFingerZoom(double dZoomFactor,const LONG lZx,const LONG lZy) {}
	virtual void FingerRotate(double dAngle,const LONG lOx,const LONG lOy){}
	virtual void FingerMove(const LONG ldx, const LONG ldy){}

	virtual void touchDown(int x, int y, int id) {};
	virtual void touchMoved(int x, int y, int id) {};
	virtual void touchUp(int x, int y, int id) {};

	virtual void touchDown(ofTouchEventArgs &touch) {
		touchDown(touch.x, touch.y, touch.id);
	};
	virtual void touchMoved(ofTouchEventArgs &touch) {
		touchMoved(touch.x, touch.y, touch.id);
	};
	virtual void touchUp(ofTouchEventArgs &touch) {
		touchUp(touch.x, touch.y, touch.id);
	};
};

