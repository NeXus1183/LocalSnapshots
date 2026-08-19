#pragma once
#include <map>
#include <iostream>
#include "raylib.h"

enum Scenes 
{
    MainMenu,
    Tutorial,
    KLCC,
    Penang,
    Mamak,
    TamanNegara,
    Terengannu,
    MountKinabalu,
    EndScreen,
};

class SceneManager
{
public:
    void loadScene();
    void scenePlay();
    void changeScene();
    SceneManager();
    ~SceneManager();
private:
    //std::map<int, Scene> sceneList;
    Scenes curScene;
    Scenes nextScene;
};
