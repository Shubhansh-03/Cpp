#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	
	GLFWwindow* window = glfwCreateWindow(800, 800, "OpenGL Window", NULL, NULL);

	if (window == NULL) {
		std::cerr << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	gladLoadGL();


	glViewport(0, 0, 800, 800);
	// Set the clear color to a dark blue shade
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	// Clear the color buffer to apply the clear color
	glClear(GL_COLOR_BUFFER_BIT);
	// Swap the back buffer with the front buffer to display the content
	glfwSwapBuffers(window);

	while(!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	} 

	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}