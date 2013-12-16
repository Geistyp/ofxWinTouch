#include "ofMain.h"
#include "ofApp.h"
#include "ofWinGlutWindow.h"

//========================================================================
int main( ){

	ofWinGlutWindow window; // create a window
	window.setUseGestures(true);
	// set width, height, mode (OF_WINDOW or OF_FULLSCREEN)
	ofSetupOpenGL(&window, 1024, 768, OF_WINDOW);
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
