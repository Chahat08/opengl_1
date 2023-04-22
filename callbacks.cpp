#include "callbacks.h"

void framebuffer_size_callback(GLFWwindow* window, int height, int width) {
	glViewport(0, 0, width, height);
}