#pragma once
#include <GLFW/glfw3.h>
class Window
{
public:
	GLFWwindow* window;
	int windowHeight = 600;
	int windowWidth = 800;
	
	void swapBuffers();
	void initiateWindow();
};
void framebuffer_size_callback(GLFWwindow* window, int width, int height);

