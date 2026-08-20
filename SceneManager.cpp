#include "SceneManager.h"

void SceneManager::deallocate()
{
    texLoader.unloadAllTexture();
}

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
        changeScene();
    }
    
}

void SceneManager::timerCountdownGame()
{
    if (m_gameTimer > 0)
    {
        m_gameTimer -= GetFrameTime();
        std::cout << m_gameTimer << std::endl;
    }
    else
    {
        changeScene();
    }
}

void SceneManager::resetValues()
{
    m_gameTimer = 120;
    m_score = 0;
    m_spawnTimer = 2;
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
        int xOffsetText = 200;
        int yOffsetText = 80;
        DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), GREEN);
        DrawText("Main Menu SCREEN", 20, 20, 40, BLACK);  
        DrawText("CLICK TO START", GetScreenWidth()/2 - xOffsetText, GetScreenHeight() - yOffsetText, 40, BLACK);  
    }
    else if (m_curScene == 2)
    {
        DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), GRAY);
        DrawText("TUTORIAL", 20, 20, 40, MAROON);
    }
    else if (m_curScene == 3)
    {
        
        Rectangle rainforestRec = {0.0f, 0.0f, (float)GetScreenWidth(), (float)GetScreenHeight()};
        Rectangle rainforestTexRec = {0.0f, 0.0f, (float)texLoader.findTexture("rainforest").width, (float)texLoader.findTexture("rainforest").height};
        DrawTexturePro(texLoader.findTexture("rainforest"), rainforestTexRec, rainforestRec, {0, 0}, 0, RAYWHITE);
        Rectangle cameraRec = {GetMousePosition().x - 350/2, GetMousePosition().y - 200/2, 350, 200};
        Rectangle cameraTexRec = {0.0f, 0.0f, (float)texLoader.findTexture("camera").width, (float)texLoader.findTexture("camera").height};
        DrawTexturePro(texLoader.findTexture("camera"), cameraTexRec, cameraRec, {0, 0}, 0, RAYWHITE);
        DrawText("Taman Negara SCREEN", 20, 20, 40, MAROON);
    }
     else if (m_curScene == 4)
    {
        DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), PURPLE);
        DrawText("END SCREEN", 20, 20, 40, MAROON);
    }
}

void SceneManager::changeScene()
{
    switch (m_curScene)
    {
    case 1:
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            std::cout << "LMB pressed" << std::endl;
            m_curScene = 2;
        }
        break;
    case 2:
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            std::cout << "RMB pressed" << std::endl;
            m_curScene = 3;
        }
        break;
    case 3:
        m_curScene = 4;
        break;
    case 4:
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            std::cout << "LMB pressed" << std::endl;
            resetValues();
            m_curScene = 1;
        }
        break;
    default:
       m_curScene = 1;
       break;
    }
}


SceneManager::SceneManager()
{
    m_curScene = 0;
    m_introTimer = 3;
    resetValues();
};

SceneManager::~SceneManager()
{

}