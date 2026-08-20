#pragma once
#include <map>
#include <iostream>
#include <memory>
#include <vector>
#include "raylib.h"
#include "textureLoader.h"
#include "GameObject.h"
class SceneManager
{
public:
    void deallocate();
    void timerCountdownIntro();
    void timerCountdownGame();
    void scenePlay();
    void changeScene();
    int curScene();
    void resetValues();
    SceneManager();
    ~SceneManager();
private:
    int m_curScene;
    float m_introTimer;
    float m_gameTimer;
    float m_spawnTimer;
    textureLoader texLoader;
    int m_score;
    std::vector<GameObject> gameObjectList;
};
