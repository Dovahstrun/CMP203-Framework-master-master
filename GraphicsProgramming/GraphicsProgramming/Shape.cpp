#include "shape.h"


extern float verts[] = {	-1.0, 1.0, 1.0,			// Vertex #0
							-1.0, -1.0, 1.0,		// Vertex #1
							1.0,  -1.0, 1.0,		// Vertex #2
							1.0,  1.0, 1.0,			// Vertex #3
						};

extern float norms[] = { 0.0, 0.0, 1.0,		//0
						0.0, 0.0, 1.0,		//1
 						0.0, 0.0, 1.0,		//2
						0.0, 0.0, 1.0,		//3
						};		


extern float texcoords[]= {	0.0, 0.0, 		//0
							0.0, 1.0, 		//1
 							1.0, 1.0, 		//2
							1.0, 0.0, 		//3
							};

extern GLubyte indices[] = { 0, 1, 2, //front
							 0, 2, 3
							};

extern float cubetexcoords[] = {//front
	0.0, 0.0, 		//0
	0.0, 1.0, 		//1
	1.0, 1.0, 		//2
	1.0, 0.0, 		//3
					//back													
					0.0, 1.0, 		//0
					0.0, 0.0, 		//1
					1.0, 0.0, 		//2
					1.0, 1.0,		//3

									//left
									0.0, 0.0, 		//0
									0.0, 1.0, 		//1
									1.0, 1.0, 		//2
									1.0, 0.0, 		//3
													//right
													0.0, 0.0, 		//0
													0.0, 1.0, 		//1
													1.0, 1.0, 		//2
													1.0, 0.0, 		//3
																	//top
																	0.0, 0.0, 		//0
																	0.0, 1.0, 		//1
																	1.0, 1.0, 		//2
																	1.0, 0.0, 		//3
																					//bottom
																					0.0, 0.0, 		//0
																					0.0, 1.0, 		//1
																					1.0, 1.0, 		//2
																					1.0, 0.0, 		//3
};

extern float cubenorms[] = {	//front 
	0.0, 0.0, 1.0,		//0
	0.0, 0.0, 1.0,		//1
	0.0, 0.0, 1.0,		//2
	0.0, 0.0, 1.0,		//3

						//back
						0.0, 0.0, -1.0,		//0
						0.0, 0.0, -1.0,		//1
						0.0, 0.0, -1.0,		//2
						0.0, 0.0, -1.0,		//3

											//left
											-1.0, 0.0, 0.0,		//0
											-1.0, 0.0, 0.0,		//1
											-1.0, 0.0, 0.0,		//2
											-1.0, 0.0, 0.0,		//3

																//right
																1.0, 0.0, 0.0,		//0
																1.0, 0.0, 0.0,		//1
																1.0, 0.0, 0.0,		//2
																1.0, 0.0, 0.0,		//3

																					//top
																					0.0, 1.0, 0.0,		//0
																					0.0, 1.0, 0.0,		//1
																					0.0, 1.0, 0.0,		//2
																					0.0, 1.0, 0.0,		//3


																										//bottom
																										0.0, -1.0, 0.0,		//0
																										0.0, -1.0, 0.0,		//1
																										0.0, -1.0, 0.0,		//2
																										0.0, -1.0, 0.0,		//3
};

extern float cubeverts[] = {	//front
	-1.0, 1.0, 1.0,			// Vertex #0
	-1.0, -1.0, 1.0,		// Vertex #1
	1.0,  -1.0, 1.0,		// Vertex #2
	1.0,  1.0, 1.0,			// Vertex #3

							//back
							-1.0, 1.0, -1.0,			// Vertex #0
							-1.0, -1.0, -1.0,		// Vertex #1
							1.0,  -1.0, -1.0,		// Vertex #2
							1.0,  1.0, -1.0,			// Vertex #3

														//left
														-1.0,-1.0,-1.0,
														-1.0,-1.0,1.0,
														-1.0,1.0,1.0,
														-1.0,1.0,-1.0,

														//right
														1.0,-1.0,-1.0,
														1.0,-1.0,1.0,
														1.0,1.0,1.0,
														1.0,1.0,-1.0,

														//top
														-1.0,1.0,-1.0,
														-1,1.0,1.0,
														1.0,1.0,1.0,
														1.0,1.0,-1.0,

														//bottom
														//top
														-1.0,-1.0,-1.0,
														-1,-1.0,1.0,
														1.0,-1.0,1.0,
														1.0,-1.0,-1.0,
};

float CUBE_VERTS[] = {
	-1.0, -1.0, -1.0, // vertex #0
	1.0, -1.0, -1.0, // vertex #1
	1.0, 1.0, -1.0, // Vertex #2
	-1.0, 1.0, -1.0, // Vertex #3
	-1.0, -1.0, 1.0, // Vertex #4
	1.0, -1.0, 1.0, // Vertex #5
	1.0, 1.0, 1.0, // Vertex #6
	-1.0, 1.0, 1.0 }; // Vertex #7

float CUBE_NORMS[] =
{
	0.0, 0.0, -1.0,
	0.0, 0.0, -1.0,
	0.0, 0.0, -1.0,
	0.0, 0.0, -1.0,
	0.0, 0.0, 1.0,
	0.0, 0.0, 1.0,
	0.0, 0.0, 1.0,
	0.0, 0.0, 1.0,
};

GLubyte CUBE_INDICES[] = { 1, 0, 2, //front
						   2, 0, 3,
						   4, 5, 7, //back
						   7, 5, 6,
						   0, 4, 3, //left
						   3, 4, 7,
						   5, 1, 6, //right
						   6, 1, 2,
						   7, 6, 3, //up
						   3, 6, 2,
						   1, 0, 5, //down
						   5, 0, 4 };

extern GLubyte IndexArray[] = { 0,1,2,3 };//order to draw vertexes

void Shape::render1()
{
	// add code to render the cube (above) using method 1
	// glArrayElement()
	//Enable the arrays
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_NORMAL_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);

	//specify data for the arrays
	glVertexPointer(3, GL_FLOAT, 0, cubeverts);
	glNormalPointer(GL_FLOAT, 0, cubenorms);
	glTexCoordPointer(2, GL_FLOAT, 0, cubetexcoords);

	//dereferencing method of choice = 1
	glBegin(GL_QUADS);
		glArrayElement(0);
		glArrayElement(1);
		glArrayElement(2);
		glArrayElement(3);
		glArrayElement(4);
		glArrayElement(5);
		glArrayElement(6);
		glArrayElement(7);
		glArrayElement(8);
		glArrayElement(9);
		glArrayElement(10);
		glArrayElement(11);
		glArrayElement(12);
		glArrayElement(13);
		glArrayElement(14);
		glArrayElement(15);
		glArrayElement(16);
		glArrayElement(17);
		glArrayElement(18);
		glArrayElement(19);
		glArrayElement(20);
		glArrayElement(21);
		glArrayElement(22);
		glArrayElement(23);
	glEnd();

	//turn off
	glDisableClientState(GL_VERTEX_ARRAY);
	glDisableClientState(GL_NORMAL_ARRAY);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);
	

}

void Shape::render2()
{
	// add code to render the cube (above) using method 2
	// glDrawArrays()

	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_NORMAL_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);

	//specify data for the arrays
	glVertexPointer(3, GL_FLOAT, 0, CUBE_VERTS);
	glNormalPointer(GL_FLOAT, 0, cubenorms);
	glTexCoordPointer(2, GL_FLOAT, 0, cubetexcoords);

	//dereferencing method of choice = 2
	glDrawArrays(GL_QUADS, 0, 6);

	//turn off
	glDisableClientState(GL_VERTEX_ARRAY);
	glDisableClientState(GL_NORMAL_ARRAY);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);

	

}

void Shape::render3()
{
	// add code to render the cube (above) using method 3
	// glDrawElements()
	glEnableClientState(GL_INDEX_ARRAY);
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_NORMAL_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);
	

	//specify data for the arrays
	glVertexPointer(3, GL_FLOAT, 0, CUBE_VERTS);
	glNormalPointer(GL_FLOAT, 0, cubenorms);
	glTexCoordPointer(2, GL_FLOAT, 0, cubetexcoords);
	glIndexPointer(GL_FLOAT, 0, CUBE_INDICES);

	//dereferencing method of choice = 2
	glDrawElements(GL_QUADS, 24, GL_UNSIGNED_BYTE, CUBE_INDICES);

	//turn off
	glDisableClientState(GL_INDEX_ARRAY);
	glDisableClientState(GL_VERTEX_ARRAY);
	glDisableClientState(GL_NORMAL_ARRAY);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);
	
}


