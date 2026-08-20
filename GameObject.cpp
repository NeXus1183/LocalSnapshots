#include "GameObject.h"

Rectangle GameObject::getColisionRect()
{
    return m_destRect;
}

std::string GameObject::name()
{
    return m_name;
}

int GameObject::awardPoint()
{
    if (m_hasTaken == false)
    {
        m_hasTaken = true;
        std::cout << "awarded point" << std::endl;
        return m_points;
    }
    return 0;
}

void GameObject::action()
{
    m_x += m_speed * GetFrameTime();
    if (m_toPosX < 0)
    {
        if (m_x < m_toPosX)
        {
            m_toRemove = true;
        }
    }
    else if (m_toPosX > 0)
    {
        if (m_x > m_toPosX)
        {
            m_toRemove = true;
        }
    }
    m_destRect = Rectangle{(float)m_x, (float)m_y, 500, 200};
    DrawTexturePro(m_texture, m_sourceRect, m_destRect, {0, 0}, 0, RAYWHITE);
}

GameObject::GameObject(std::string name, Rectangle texRect, Texture2D texture, int points, int Speed, int oriPos, int yPos)
{
    m_name = name;
    m_sourceRect = texRect;
    m_texture = texture;
    m_oriPosX = oriPos;
    m_hasTaken = false;
    m_toRemove = false;
    m_points = points;
    m_y = yPos;
    m_speed = Speed;
    if (m_oriPosX == 1)
    {
        m_x = 0;
        m_toPosX = GetScreenWidth() + m_texture.width;
        std::cout << "isPos" <<std::endl;
    }
    else
    {
        m_x = GetScreenWidth();
        m_speed = -m_speed;
        m_toPosX = 0 - m_texture.width;
        std::cout << "isNeg" <<std::endl;
    }
}