#include "AppWindow.h"

void AppWindow::createWindow()
{
    InitWindow(m_screenWidth, m_screenHeight, "LocalSnapshots");   
    SetTargetFPS(m_targetFPS); 
}

void AppWindow::run()
{
    SceneManager sceneManager;
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        //Logic functions here
        //Vector2 mousePos = GetMousePosition();
        sceneManager.changeScene();
        if (sceneManager.curScene() == 0)
        {
            sceneManager.timerCountdown();
        }
        BeginDrawing();
        //Draw related functions here
        if (sceneManager.curScene() == 0)
        {
            ClearBackground(RAYWHITE);
            DrawText("A Game for Gauntlent Mini", m_screenWidth/2 - 275, m_screenHeight/2, 40, BLACK);
        }
        else
        {
            sceneManager.scenePlay();
        }
        EndDrawing(); 
    }   
    CloseWindow();  
}

int AppWindow::screenWidth() const
{
    return m_screenWidth;
}

int AppWindow::screenHeight() const
{
    return m_screenHeight;
}
