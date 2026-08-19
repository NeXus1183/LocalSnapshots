#pragma once
#include <iostream>
#include <string>
#include "Scene.h"
#include "raylib.h"

class PenangScene : public Scene
{
public:
    void sceneLogic() override;
    void sceneRender() override;
    PenangScene(std::string name, int width, int height) : Scene(name, width, height){}
    ~PenangScene(){}
private:
    /* data */
};


