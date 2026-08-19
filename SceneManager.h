#pragma once
#include <map>
#include <iostream>
#include <memory>
#include "raylib.h"
#include "Scene.h"
#include "MainMenuScene.h"
#include "KualaLumpurScene.h"
#include "PenangScene.h"
#include "EndScene.h"

class SceneManager
{
public:
    void timerCountdown();
    void loadScene();
    void scenePlay();
    void changeScene();
    int curScene();
    SceneManager();
    ~SceneManager();
private:
    std::map<int, std::unique_ptr<Scene>> m_sceneList;
    int m_curScene = 0;
    int m_nextScene;
    float m_introTimer = 3;
};
