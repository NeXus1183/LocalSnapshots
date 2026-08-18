#pragma once
#include <map>
#include "raylib.h"
#include "SceneStuff/Scene.h"

class SceneManager
{
public:
    void loadScene();
    void scenePlay();
    SceneManager();
    ~SceneManager();
private:
    std::map<int, Scene> sceneList;
    int currSceneID;
    int nextSceneID;
};
