#include <iostream>
#include "GLFW/glfw3.h"

int main() {
	int a = glfwInit();
	std::cout << a;
	return a;
}