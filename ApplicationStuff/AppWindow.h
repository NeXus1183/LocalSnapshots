#pragma once
#include <iostream>
#include "raylib.h"

class AppWindow
{
public:
    void createWindow();
    void run();
    AppWindow(int width, int height, int fps) : m_screenWidth(width), m_screenHeight(height), m_targetFPS(fps){}
    ~AppWindow(){}
private:
    const int m_screenWidth;
    const int m_screenHeight;
    const int m_targetFPS;
};