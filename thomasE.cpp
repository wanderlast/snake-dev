//cs335 Fall 2015 Project Component
//author: Thomas Espinoza
//
//This is a bootstrap code file to begin working off of.
//Please remove any includes or files that are unnecessary
//for what you are working on.
//
using namespace std;
#include <sstream>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <ctime>
#include <cmath>
#include <X11/Xlib.h>
#include <X11/keysym.h>
#include <GL/glx.h>
#include "ppm.h"
#include "log.h"
#include "main.h"
extern "C" {
  #include "fonts.h"
}
//#define WINDOW_WIDTH  1300
//#define WINDOW_HEIGHT 800

//X Windows variables
GLXContext glc;

int xres5=1300, yres5=800;

void highScore(int score)
{
	unsigned int cref = 0x00ffffff; //white
	
	
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(0, 0);
	glVertex2i(0, yres5);
	glVertex2i(xres5, yres5);
	glVertex2i(xres5, 0);
	glEnd();

	Rect titleScore;
	titleScore.bot = 500;
	titleScore.left = 135;
	titleScore.center = 150;

	ggprint16(&titleScore, 0, cref, "--HIGH SCORE--");
	
	Rect finalScore;
	finalScore.bot = 400;
	finalScore.left = 135;
	finalScore.center = 150;
	
    stringstream strs;
    strs << score;
    string temp_str = strs.str();
    char* testCheck2 = (char*) temp_str.c_str();

	ggprint12(&finalScore, 0, cref, testCheck2);
  
  
  return;
}


