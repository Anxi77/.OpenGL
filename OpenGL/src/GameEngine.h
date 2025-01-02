#pragma once
#include <GLFW/glfw3.h>

class GameEngine
{
public:
    GameEngine() : window(nullptr) {}
    ~GameEngine() { Shutdown(); }
    bool Initialize(const char *title, int width, int height);
    void Run();
    void Shutdown();

private:
    GLFWwindow *window;
};