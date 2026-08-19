#pragma once
#include <iostream>
#include <string>
#include "Scene.h"
#include "raylib.h"

class KualaLumpurScene : public Scene
{
public:
    void sceneLogic() override;
    void sceneRender() override;
    KualaLumpurScene(std::string name, int width, int height) : Scene(name, width, height){}
    ~KualaLumpurScene(){}
private:
    /* data */
};


