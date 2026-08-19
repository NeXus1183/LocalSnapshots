#pragma once
#include <iostream>
#include <string>
#include "Scene.h"
#include "raylib.h"

class TerrenganuBeachScene : public Scene
{
public:
    void sceneLogic() override;
    void sceneRender() override;
    TerrenganuBeachScene(std::string name, int width, int height) : Scene(name, width, height){}
    ~TerrenganuBeachScene(){}
private:
    /* data */
};


