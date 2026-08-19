#pragma once
#include <map>
#include "raylib.h"
#include "GameObject.h"

class GameObjectManager
{
public:
    void addObject(GameObject newObject);
    GameObjectManager() = delete;
    ~GameObjectManager();
    GameObjectManager(const GameObjectManager&) = delete;             // forbid copying: two owners would
    GameObjectManager& operator=(const GameObjectManager&) = delete;
private:
    std::map<int, GameObject> gameObjectList;
};

