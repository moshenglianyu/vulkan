#pragma once

#define GLFW_INCLEUDE_VULKAN
#include <glfw3.h>

#include<string>
namespace lve{

class LveWindow
{
public:
    LveWindow(int w,int h,std::string name);
    ~LveWindow();

    bool shouldClose(){return glfwWindowShouldClose(window);}

private:
void initWindow();

const int width;
const int height;

std::string windowName;
GLFWwindow* window;
};
}//namespace lve