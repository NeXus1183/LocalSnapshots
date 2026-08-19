#include "EndScene.h"

void EndScene::sceneLogic()
{

}

void EndScene::sceneRender()
{
    DrawRectangle(0, 0, screenWidth(), screenHeight(), RED);
    DrawText("End SCREEN", 20, 20, 40, BLACK);
}