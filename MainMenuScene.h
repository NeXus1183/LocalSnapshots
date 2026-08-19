#pragma once
#include <iostream>
#include <string>
#include "Scene.h"

class MainMenuScene : public Scene
{
public:
    void sceneLogic() override;
    void sceneRender() override;
    MainMenuScene(std::string name) : Scene(name) {}
    ~MainMenuScene();
private:
    /* data */
};


