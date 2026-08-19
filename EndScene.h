#pragma once
#include <iostream>
#include <string>
#include "Scene.h"
#include "raylib.h"

class EndScene : public Scene
{
public:
    void sceneLogic() override;
    void sceneRender() override;
    EndScene(std::string name, int width, int height) : Scene(name, width, height){};
    ~EndScene(){};
private:
    /* data */
};


