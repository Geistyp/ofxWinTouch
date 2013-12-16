#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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

//--------------------------------------------------------------
void ofApp::touchDown(ofTouchEventArgs &touch){
	cout<<"touch:"<<touch.id<<" "<<touch.x<<" "<<touch.y<<endl;
}

//--------------------------------------------------------------
void ofApp::touchMoved(ofTouchEventArgs &touch){

}

//--------------------------------------------------------------
void ofApp::touchUp(ofTouchEventArgs &touch){

}

//--------------------------------------------------------------
void ofApp::twoFingerTap(){
}

//--------------------------------------------------------------
void ofApp::twoFingerZoom(double dZoomFactor,const LONG lZx,const LONG lZy) {
	cout<<"Zoom:"<<dZoomFactor<<" "<<lZx<<" "<<lZy<<endl;
}

//--------------------------------------------------------------
void ofApp::FingerMove(const LONG ldx, const LONG ldy)
{
	cout<<"Move:"<<ldx<<" "<<ldy<<endl;
}
//--------------------------------------------------------------
void ofApp::FingerRotate(double dAngle,const LONG lOx,const LONG lOy)
{
	cout<<"Angle:"<<dAngle<<" "<<lOx<<" "<<lOy<<endl;
}

