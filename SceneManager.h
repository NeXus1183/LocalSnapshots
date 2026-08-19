#pragma once
#include <map>
#include <iostream>
#include <memory>
#include "raylib.h"

class SceneManager
{
public:
    void timerCountdownIntro();
    void timerCountdownGame();
    void scenePlay();
    void changeScene();
    int curScene();
    SceneManager();
    ~SceneManager();
private:
    int m_curScene;
    float m_introTimer;
};
