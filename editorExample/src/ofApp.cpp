#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetVerticalSync(true);
	ofSetFrameRate(30);

	ofxEditor::loadFont("fonts/PrintChar21.ttf", 30);
	
	colorScheme.setWordColor("function", ofColor::fuchsia);
	colorScheme.setWordColor("end", ofColor::fuchsia);
	colorScheme.setStringColor(ofColor::yellow);
	colorScheme.setNumberColor(ofColor::orangeRed);
	//editor.setColorScheme(colorScheme);
	
	editor.setSize(ofGetWidth(), ofGetHeight());
	editor.setText("function setup\n\tprint(\"123hello456\")\nend\n\nfunction draw\n\tof.setColor(200.1)\n\tof.line(10, 10, 100, 100)\nend\n5hj55hj44\n");
	
	ofBackground(0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	editor.draw();
//	ofDrawBitmapString("fps: "+ofToString(ofGetFrameRate()), 10, 10);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	if(ofGetKeyPressed(OF_KEY_SUPER)) {
		switch(key) {
			case 'g':
				if(editor.getColorScheme()) {
					editor.clearColorScheme();
				}
				else {
					editor.setColorScheme(colorScheme);
				}
				return;
			case 'l':
				editor.setLineWrapping(!editor.getLineWrapping());
				return;
		}
	}
	editor.keyPressed(key);
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
	editor.setSize(w, h);
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
