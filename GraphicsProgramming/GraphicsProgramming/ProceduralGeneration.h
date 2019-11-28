#pragma once
// Include GLUT, openGL, input.
#include "glut.h"
#include <gl/GL.h>
#include <gl/GLU.h>
#define _USE_MATH_DEFINES
#include<math.h>

class ProceduralGeneration
{
public:
	ProceduralGeneration();
	void RenderDisk(int sides);
	void RenderSphere(int sides);
	void RenderCylinder(int sides, int height);
};