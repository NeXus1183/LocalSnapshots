#pragma once
#include <map>
#include "raylib.h"
#include "GameObjectStuff/GameObject.h"

class GameObjectManager
{
public:
    void addObject(GameObject newObject);
    GameObjectManager();
    ~GameObjectManager();
private:
    std::map<int, GameObject> gameObjectList;
};

