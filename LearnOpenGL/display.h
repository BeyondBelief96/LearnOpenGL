#pragma once
#ifndef DISPLAY_H
#define DISPLAY_H

#include <GLFW/glfw3.h>

extern float deltaTime; // Time between current frame and last frame.
extern float lastFrame; // Time of last frame.

GLFWwindow* initialize_opengl_window(void);
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
int get_window_width();
int get_window_height();
void set_window_width(int width);
void set_window_height(int height);

#endif