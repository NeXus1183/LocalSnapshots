#pragma once
#include <map>
#include <string>
#include <iostream>
#include "raylib.h"

class textureLoader
{
public:
    Texture2D findTexture(std::string name);
    void unloadAllTexture();
    textureLoader();
    ~textureLoader();
private:
    std::map<std::string, Texture2D> textureMap;
};

