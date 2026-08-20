#pragma once
#include <string>
#include "raylib.h"

class GameObject
{
public:

    GameObject();
    ~GameObject();
protected:
    Rectangle destRect;
    Rectangle sourceRect;
    Texture2D texture;
    int points;
};

