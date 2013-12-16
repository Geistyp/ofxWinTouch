#pragma once

#include "ofMain.h"
#include "ofBaseTouchApp.h"

class ofApp : public ofBaseTouchApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		// win7 events
		void touchDown(ofTouchEventArgs &touch);
		void touchMoved(ofTouchEventArgs &touch);
		void touchUp(ofTouchEventArgs &touch);

		// NOTE: you must call setUseGestures() in your main.cpp to use these last two
		void twoFingerTap();
		void twoFingerZoom(double dZoomFactor,const LONG lZx,const LONG lZy);
		void FingerRotate(double dAngle,const LONG lOx,const LONG lOy);
		void FingerMove(const LONG ldx, const LONG ldy);
		
};
