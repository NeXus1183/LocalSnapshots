#pragma once
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "raylib.h"

class GameObject
{
public:
    Rectangle getColisionRect();
    std::string name();
    int awardPoint();
    void action();
    GameObject(std::string name, Rectangle texRect, Texture2D texture, int points, int Speed, int oriPos, int yPos);
    ~GameObject(){};
private:
    std::string m_name;
    Rectangle m_destRect;
    Rectangle m_sourceRect;
    Texture2D m_texture;
    bool m_hasTaken;
    bool m_toRemove;
    int m_points;
    int m_x;
    int m_y;
    int m_speed;
    int m_oriPosX;
    int m_toPosX;
};

