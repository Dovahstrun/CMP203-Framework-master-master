#include "MyCamera.h"

MyCamera::MyCamera()
	: Yaw(0.0f)
	, Pitch(0.0f)
	, Roll(0.0f)
	, forward(0.0f, 0.0f, 0.0f)
	, up(0.0f, 1.0f, 0.0f)
	, position(0.0f, 0.0f, 10.0f)
	, right(0.0f, 0.0f, 0.0f)
{

}

void MyCamera::update(float dt)
{

	float cosR, cosP, cosY; //temp values for sin/cos from 
	float sinR, sinP, sinY;
	// Roll, Pitch and Yallare variables stored by the camera
	// handle rotation
	// Only want to calculate these values once, when rotation changes, not every frame. 
	cosY= cosf(Yaw*3.1415/180);
	cosP= cosf(Pitch*3.1415/180);
	cosR= cosf(Roll*3.1415/180);
	sinY= sinf(Yaw*3.1415/180);
	sinP= sinf(Pitch*3.1415/180);
	sinR= sinf(Roll*3.1415/180);

	// This using the parametric equation of a sphere
	
	// Calculate the three vectors to put into  gluLookat
	// Look direction,  position and the up vector 
	// This function could also calculate the right vector
	forward.x= sinY* cosP;
	forward.y= sinP;
	forward.z= cosP* -cosY;

	// Look At Point
	// To calculate add Forward Vector to Camera position.
	lookAt = forward + position;


	// Up Vector
	up.x = -cosY * sinR -sinY * sinP * cosR;
	up.y = cosP * cosR;up.z = -sinY * sinR -sinP * cosR * -cosY;
	// Side Vector (right)
	right = forward.cross(up);
	// this is a cross product between the forward and up vector. 
	// If you don’t need to calculate this,  don’t do it.

}

Vector3 MyCamera::getPosition()
{
	return position;
}

Vector3 MyCamera::getLookAt()
{
	return lookAt;
}

Vector3 MyCamera::getUp()
{
	return up;
}

void MyCamera::moveForward(float dt)
{
	position.x += 10.0 * forward.x * dt;
	position.y += 10.0 * forward.y * dt;
	position.z += 10.0 * forward.z * dt;
}

void MyCamera::moveBackward(float dt)
{
	position.x -= 10.0 * forward.x * dt;
	position.y -= 10.0 * forward.y * dt;
	position.z -= 10.0 * forward.z * dt;
}

void MyCamera::moveLeft(float dt)
{
	position.x -= 10.0 * right.x * dt;
	position.y -= 10.0 * right.y * dt;
	position.z -= 10.0 * right.z * dt;
}

void MyCamera::moveRight(float dt)
{
	position.x += 10.0 * right.x * dt;
	position.y += 10.0 * right.y * dt;
	position.z += 10.0 * right.z * dt;
}

void MyCamera::moveUp(float dt)
{
	position.y += up.y / 10;
}

void MyCamera::moveDown(float dt)
{
	position.y -= up.y / 10;
}

void MyCamera::rotateLeft()
{
	Yaw -= 1.0f;
}

void MyCamera::rotateRight()
{
	Yaw += 1.0f;
}

void MyCamera::rotateYaw(float rotation, float dt)
{
	Yaw += 20 * rotation * dt;
}

void MyCamera::rotatePitch(float rotation, float dt)
{
	Pitch -= 20 * rotation * dt;
	if (Pitch > 80)
	{
		Pitch = 80.0f;
	}
	else if (Pitch < -80)
	{
		Pitch = -80;
	}
}
