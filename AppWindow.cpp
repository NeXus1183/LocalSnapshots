#include "AppWindow.h"

void AppWindow::createWindow()
{
    InitWindow(m_screenWidth, m_screenHeight, "LocalSnapshots");   
    SetTargetFPS(m_targetFPS); 
}

void AppWindow::run()
{
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        //Logic functions here
        Vector2 mousePos = GetMousePosition();
        SceneManager sceneManager;
        sceneManager.changeScene();
        BeginDrawing();
        //Draw related functions here
        ClearBackground(RAYWHITE);
        DrawFPS(10, 10);
        DrawCircle(mousePos.x, mousePos.y, 40, LIME);

        EndDrawing(); 
    }   
    CloseWindow();  
}