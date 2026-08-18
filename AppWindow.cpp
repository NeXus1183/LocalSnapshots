#include "headers/AppWindow.h"

void AppWindow::createWindow()
{
    InitWindow(m_screenWidth, m_screenHeight, "LocalSnapshots");
    SetTargetFPS(m_targetFPS);         
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing(); 
    }   
    CloseWindow();  
}