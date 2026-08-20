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
        switch (sceneManager.curScene())
        {
        case 0:
            sceneManager.timerCountdownIntro();
            break;
        case 3:
            sceneManager.timerCountdownGame();
            break;
        default:
            sceneManager.changeScene();
            break;
        }
        BeginDrawing();
        //Draw related functions here
        sceneManager.scenePlay();
        EndDrawing(); 
    }   
    sceneManager.deallocate();
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
