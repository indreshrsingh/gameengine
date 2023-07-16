#pragma once

#include <string>

#include "glad/glad.h"
#include "GLFW/glfw3.h"

namespace Framework {
    class Window {
        private: 
            std::string title = "";
            int width = 800;
            int height = 600;
            GLFWwindow *glWindow;
        public: 
            Window(std::string, int, int h);
            ~Window();
            void init();
            static void resizeCallback(GLFWwindow*, int, int);
            static void cursorPositionCallback(GLFWwindow* window, double offsetX, double offsetY);
            GLFWwindow* getGlWindow();
    };
}