#include "textureLoader.h"

Texture2D textureLoader::findTexture(std::string name)
{
    auto it = textureMap.find(name);
    if (it != textureMap.end())
    {
        return it->second;
    }
    else
    {
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
    Texture2D elephant = LoadTexture("Resources/elephant.png");
    textureMap.insert({"elephant", elephant});
    Texture2D hornbill = LoadTexture("Resources/hornbill.png");
    textureMap.insert({"hornbill", hornbill});
    Texture2D musang = LoadTexture("Resources/musang.png");
    textureMap.insert({"musang", musang});
    Texture2D myvi = LoadTexture("Resources/myvi.png");
    textureMap.insert({"myvi", myvi});
    Texture2D orangutan = LoadTexture("Resources/orangutan.png");
    textureMap.insert({"orangutan", orangutan});
    Texture2D probocis = LoadTexture("Resources/probocis.png");
    textureMap.insert({"probocis", probocis});
    Texture2D sunbear = LoadTexture("Resources/sunbear.png");
    textureMap.insert({"sunbear", sunbear});
    Texture2D tapir = LoadTexture("Resources/tapir.png");
    textureMap.insert({"tapir", tapir});
    Texture2D tiger = LoadTexture("Resources/tiger.png");
    textureMap.insert({"tiger", tiger});
    Texture2D title = LoadTexture("Resources/title.png");
    textureMap.insert({"title", title});
}

textureLoader::~textureLoader()
{
    
}