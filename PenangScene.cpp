#include "PenangScene.h"

void PenangScene::sceneLogic()
{

}

void PenangScene::sceneRender()
{
    DrawRectangle(0, 0, screenWidth(), screenHeight(), GRAY);
    DrawText("Penang", 20, 20, 40, YELLOW);
}