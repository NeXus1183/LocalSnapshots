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
        for(auto& it : gameObjectList)
        {
            it.action();
        }
        m_gameTimer -= GetFrameTime();
        m_spawnTimer -= GetFrameTime();
        if (m_spawnTimer <= 0)
        {
            int randDir = std::rand() % 2;
            int randMyvi = std::rand() % 100;
            if (randMyvi >= 90)
            {
                int randomNum = std::rand() % (GetScreenHeight()/2);
                int yPos = GetScreenHeight() - randomNum;
                Rectangle myviTextRec = {0.0f, 0.0f, (float)texLoader.findTexture("myvi").width, (float)texLoader.findTexture("myvi").height};
                gameObjectList.push_back(GameObject{"myvi", myviTextRec, texLoader.findTexture("myvi"), 1000, 450, randDir, yPos});
            }
            else
            {
                int randAnimal = std::rand() % 100;
                if (randAnimal <= 100 && randAnimal >= 95)
                {
                    int randomNum = std::rand() % (GetScreenHeight()/2);
                    int yPos = GetScreenHeight() - randomNum;
                    Rectangle tigerTextRec = {0.0f, 0.0f, (float)texLoader.findTexture("tiger").width, (float)texLoader.findTexture("tiger").height};
                    gameObjectList.push_back(GameObject{"tiger", tigerTextRec, texLoader.findTexture("tiger"), 500, 300, randDir, yPos});
                }
                else if (randAnimal < 95 && randAnimal >= 80)
                {
                    int randomNum = std::rand() % (GetScreenHeight()/2);
                    int yPos = GetScreenHeight() - randomNum;
                    Rectangle tapirTextRec = {0.0f, 0.0f, (float)texLoader.findTexture("tapir").width, (float)texLoader.findTexture("tapir").height};
                    gameObjectList.push_back(GameObject{"tapir", tapirTextRec, texLoader.findTexture("tapir"), 500, 250, randDir, yPos});
                }
                else if (randAnimal < 80 && randAnimal >= 70)
                {
                    int randomNum = std::rand() % (GetScreenHeight()/2);
                    int yPos = 0 + randomNum;
                    Rectangle orangutanTextRec = {0.0f, 0.0f, (float)texLoader.findTexture("orangutan").width, (float)texLoader.findTexture("orangutan").height};
                    gameObjectList.push_back(GameObject{"orangutan", orangutanTextRec, texLoader.findTexture("orangutan"), 350, 250, randDir, yPos});
                }
                else if (randAnimal < 70 && randAnimal >= 60)
                {
                    int randomNum = std::rand() % (GetScreenHeight()/2);
                    int yPos = 0 + randomNum;
                    Rectangle hornbillTextRec = {0.0f, 0.0f, (float)texLoader.findTexture("hornbill").width, (float)texLoader.findTexture("hornbill").height};
                    gameObjectList.push_back(GameObject{"hornbill", hornbillTextRec, texLoader.findTexture("hornbill"), 400, 500, randDir, yPos});
                }
                else if (randAnimal < 60 && randAnimal >= 55)
                {
                    int randomNum = std::rand() % (GetScreenHeight()/2);
                    int yPos = GetScreenHeight() - randomNum;
                    Rectangle elephantTextRec = {0.0f, 0.0f, (float)texLoader.findTexture("elephant").width, (float)texLoader.findTexture("elephant").height};
                    gameObjectList.push_back(GameObject{"elephant", elephantTextRec, texLoader.findTexture("elephant"), 600, 350, randDir, yPos});
                }
                else if (randAnimal < 55 && randAnimal >= 45)
                {
                    int randomNum = std::rand() % (GetScreenHeight()/2);
                    int yPos = GetScreenHeight() - randomNum;
                    Rectangle sunbearTextRec = {0.0f, 0.0f, (float)texLoader.findTexture("sunbear").width, (float)texLoader.findTexture("sunbear").height};
                    gameObjectList.push_back(GameObject{"sunbear", sunbearTextRec, texLoader.findTexture("sunbear"), 400, 450, randDir, yPos});
                }
                else if (randAnimal < 45 && randAnimal >= 25)
                {
                    int randomNum = std::rand() % (GetScreenHeight()/2);
                    int yPos = GetScreenHeight() - randomNum;
                    Rectangle probocisTextRec = {0.0f, 0.0f, (float)texLoader.findTexture("probocis").width, (float)texLoader.findTexture("probocis").height};
                    gameObjectList.push_back(GameObject{"probocis", probocisTextRec, texLoader.findTexture("probocis"), 150, 250, randDir, yPos});
                }
                else if (randAnimal < 25 && randAnimal >= 2)
                {
                    int randomNum = std::rand() % (GetScreenHeight()/2);
                    int yPos = GetScreenHeight() - randomNum;
                    Rectangle musangTextRec = {0.0f, 0.0f, (float)texLoader.findTexture("musang").width, (float)texLoader.findTexture("musang").height};
                    gameObjectList.push_back(GameObject{"musang", musangTextRec, texLoader.findTexture("musang"), 100, 250, randDir, yPos});
                }
                else if (randAnimal == 1)
                {
                    int randomNum = std::rand() % (GetScreenHeight()/2);
                    int yPos = GetScreenHeight() - randomNum;
                    Rectangle beansTextRec = {0.0f, 0.0f, (float)texLoader.findTexture("beans").width, (float)texLoader.findTexture("beans").height};
                    gameObjectList.push_back(GameObject{"beans", beansTextRec, texLoader.findTexture("beans"), 1200, 800, randDir, yPos});
                }
            }
            std::cout << "spawned object" <<std::endl;
            m_spawnTimer = 5;
        }
        else
        {
            m_spawnTimer -= GetFrameTime();
        }
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
        DrawText("LocalSnapshots", GetScreenWidth()/2 - 275, GetScreenHeight()/2, 40, BLACK);
        Rectangle titleRec = {(float)GetScreenWidth()/2 - 275, (float)GetScreenHeight()/2, (float)texLoader.findTexture("title").width, (float)texLoader.findTexture("title").height};
        Rectangle titleTexRec = {0.0f, 0.0f, (float)texLoader.findTexture("title").width, (float)texLoader.findTexture("title").height};
        DrawTexturePro(texLoader.findTexture("title"), titleTexRec, titleRec, {0, 0}, 0, RAYWHITE);
        DrawText("CLICK TO START", GetScreenWidth()/2 - xOffsetText, GetScreenHeight() - yOffsetText, 40, BLACK);  
    }
    else if (m_curScene == 2)
    {
        DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), GRAY);
        DrawText("TUTORIAL", 20, 20, 40, BLACK);
        DrawText("Move mouse to move the camera", GetScreenWidth()/2 - 500, GetScreenHeight()/2, 40, BLACK);
        DrawText("Click to snap!!", GetScreenWidth()/2 - 450, GetScreenHeight()/2 + 50, 40, BLACK);
        DrawText("Try to take as many pictures within the time limit", GetScreenWidth()/2 - 600, GetScreenHeight()/2 + 100, 40, BLACK);
    }
    else if (m_curScene == 3)
    {
        Rectangle rainforestRec = {0.0f, 0.0f, (float)GetScreenWidth(), (float)GetScreenHeight()};
        Rectangle rainforestTexRec = {0.0f, 0.0f, (float)texLoader.findTexture("rainforest").width, (float)texLoader.findTexture("rainforest").height};
        DrawTexturePro(texLoader.findTexture("rainforest"), rainforestTexRec, rainforestRec, {0, 0}, 0, RAYWHITE);
        Rectangle cameraRec = {GetMousePosition().x - 350/2, GetMousePosition().y - 200/2, 350, 200};
        Rectangle cameraTexRec = {0.0f, 0.0f, (float)texLoader.findTexture("camera").width, (float)texLoader.findTexture("camera").height};
        DrawTexturePro(texLoader.findTexture("camera"), cameraTexRec, cameraRec, {0, 0}, 0, RAYWHITE);
        DrawText(TextFormat("Time Left: %i", (int)m_gameTimer), 20, 20, 40, MAROON);
        DrawText(TextFormat("Score: %i", m_score), GetScreenWidth()/2 + 500, 20, 40, MAROON);
        for(auto& it : gameObjectList)
        {
            it.action();
            if (CheckCollisionRecs(cameraRec, it.getColisionRect()) == true)
            {
                std::cout << "colliding" << std::endl;
                if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
                {
                    m_score += it.awardPoint();
                }
            }
        }
    }
     else if (m_curScene == 4)
    {
        DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), GRAY);
        DrawText("GAME OVER", 20, 20, 40, BLACK);
        DrawText(TextFormat("Your final score is: %i", m_score), GetScreenWidth()/2 - 500, GetScreenHeight()/2 + 200, 40, BLACK);
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