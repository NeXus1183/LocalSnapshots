#pragma once
#include <string>
#include <map>
#include <iostream>

class Scene
{
public:
    virtual void sceneLogic() = 0;
    virtual void sceneRender() = 0;
    int screenHeight();
    int screenWidth();
    Scene(std::string name, int width, int height) : m_sceneName(name), m_screenWidth(width), m_screenHeight(height){}
    virtual ~Scene() = default;
private:
    std::string m_sceneName;
    int m_screenWidth;
    int m_screenHeight;
    bool m_hasTimer;
};
