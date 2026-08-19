#include "SceneManager.h"

int SceneManager::curScene()
{
    return m_curScene;
}

void SceneManager::timerCountdownIntro()
{
    if (m_introTimer > 0)
    {
        m_introTimer -= GetFrameTime();
        std::cout << m_introTimer << std::endl;
    }
    else
    {
        m_curScene = 1;
    }
    
}

void SceneManager::scenePlay()
{
    ClearBackground(RAYWHITE);
    if (m_curScene == 0)
    {
        ClearBackground(RAYWHITE);
        DrawText("A Game for Gauntlent Mini", GetScreenWidth()/2 - 275, GetScreenHeight()/2, 40, BLACK);
    }
    else if (m_curScene == 1)
    {
        DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), PURPLE);
        DrawText("Main Menu SCREEN", 20, 20, 40, MAROON);
    }
    else if (m_curScene == 2)
    {
        DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), PURPLE);
        DrawText("Tutorial SCREEN", 20, 20, 40, MAROON);
    }
    else if (m_curScene == 3)
    {
        DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), PURPLE);
        DrawText("Kuala Lumpur SCREEN", 20, 20, 40, MAROON);
    }
    else if (m_curScene == 4)
    {
        DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), PURPLE);
        DrawText("Taman Negara SCREEN", 20, 20, 40, MAROON);
    }
     else if (m_curScene == 5)
    {
        DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), PURPLE);
        DrawText("END SCREEN", 20, 20, 40, MAROON);
    }
}

void SceneManager::changeScene()
{
    if(IsKeyPressed(KEY_ONE))
    {
        std::cout << "Current Selection is: Scene 1" << std::endl;
        m_curScene = 1;
    }
    else if(IsKeyPressed(KEY_TWO))
    {
        std::cout << "Current Selection is: Scene 2" << std::endl;
        m_curScene = 2;
    }
    else if(IsKeyPressed(KEY_THREE))
    {
        std::cout << "Current Selection is: Scene 3" << std::endl;
        m_curScene = 3;
    }
    else if(IsKeyPressed(KEY_FOUR))
    {
        std::cout << "Current Selection is: Scene 4" << std::endl;
        m_curScene = 4;
    }
    else if(IsKeyPressed(KEY_FIVE))
    {
        std::cout << "Current Selection is: Scene 5" << std::endl;
    }
    else if(IsKeyPressed(KEY_SIX))
    {
       std::cout << "Current Selection is: Scene 6" << std::endl;
    }
}


SceneManager::SceneManager()
{
    m_curScene = 0;
    m_introTimer = 3;
};

SceneManager::~SceneManager()
{

}