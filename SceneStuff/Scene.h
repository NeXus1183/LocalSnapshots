#pragma once
#include <string>
#include <map>

class Scene
{
public:
    virtual void sceneLoop() = 0;
    Scene();
    ~Scene();
private:
    std::string name;
};
