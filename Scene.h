#pragma once
#include <string>
#include <map>

class Scene
{
public:
    virtual void sceneLogic() = 0;
    virtual void sceneRender() = 0;
    Scene(std::string name) : m_sceneName(name){}
    ~Scene(){};
private:
    std::string m_sceneName;
};
