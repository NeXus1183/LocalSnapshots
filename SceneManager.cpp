#include "SceneManager.h"

void SceneManager::loadScene()
{
    
}
void SceneManager::scenePlay()
{

}

void SceneManager::changeScene()
{
    if(IsKeyPressed(KEY_ONE))
    {
        std::cout << "Current Selection is: Scene 1" << std::endl;
    }
    else if(IsKeyPressed(KEY_TWO))
    {
        std::cout << "Current Selection is: Scene 2" << std::endl;
    }
    else if(IsKeyPressed(KEY_THREE))
    {
        std::cout << "Current Selection is: Scene 3" << std::endl;
    }
    else if(IsKeyPressed(KEY_FOUR))
    {
        std::cout << "Current Selection is: Scene 4" << std::endl;
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

}
SceneManager::~SceneManager()
{

}