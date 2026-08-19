#include "AppWindow.h"

void AppWindow::createWindow()
{
    InitWindow(m_screenWidth, m_screenHeight, "LocalSnapshots");   
    SetTargetFPS(m_targetFPS); 
}

void AppWindow::run()
{
    SceneManager sceneManager;
    curState = Intro;
    
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        //Logic functions here
        //Vector2 mousePos = GetMousePosition();
        switch (sceneManager.curScene())
        {
        case 1:
            curState = Menu;
            break;
        case 2:
            curState = Menu;
            break;
        default:
            break;
        }

        if (curState == Intro)
        {
            sceneManager.timerCountdownIntro();
        }
        
        BeginDrawing();
        //Draw related functions here
        sceneManager.scenePlay();
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
