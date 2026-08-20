#include "textureLoader.h"

Texture2D textureLoader::findTexture(std::string name)
{
    auto it = textureMap.find(name);
    if (it != textureMap.end())
    {
        std::cout << "Texture Found" << std::endl;
        return it->second;
    }
    else
    {
        std::cout << "Texture Not Found" << std::endl;
        return textureMap.at("beans");
    }
}

void textureLoader::unloadAllTexture()
{
    for (const auto& it : textureMap)
    {
        UnloadTexture(it.second);
    }
    textureMap.clear();
}
textureLoader::textureLoader()
{
    Texture2D beans = LoadTexture("Resources/bean.png");
    textureMap.insert({"beans", beans});
    Texture2D rainforest = LoadTexture("Resources/rainforest.png");
    textureMap.insert({"rainforest", rainforest});
    Texture2D camera = LoadTexture("Resources/camera.png");
    textureMap.insert({"camera", camera});
}

textureLoader::~textureLoader()
{
    
}