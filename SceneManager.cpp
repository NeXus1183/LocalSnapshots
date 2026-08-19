#include "SceneManager.h"

void SceneManager::timerCountdown()
{
    if (m_introTimer > 0)
    {
        m_introTimer -= GetFrameTime();
    }
    else
    {
        m_curScene = 1;
    }
    
}

int SceneManager::curScene()
{
    return m_curScene;
    std::cout << m_curScene << std::endl;
}

void SceneManager::loadScene()
{
    
}

void SceneManager::scenePlay()
{
    std::cout << m_curScene << std::endl;
    auto it = m_sceneList.find(m_curScene);
    it->second->sceneRender();    
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
    m_sceneList.insert({1, std::make_unique<MainMenuScene>("MainMenu", GetScreenWidth(), GetScreenHeight())});
    m_sceneList.insert({2, std::make_unique<EndScene>("End", GetScreenWidth(), GetScreenHeight())});
    m_sceneList.insert({3, std::make_unique<KualaLumpurScene>("Kuala Lumpur", GetScreenWidth(), GetScreenHeight())});
    m_sceneList.insert({4, std::make_unique<PenangScene>("Penang", GetScreenWidth(), GetScreenHeight())});
}
SceneManager::~SceneManager()
{

}