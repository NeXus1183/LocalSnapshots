#include "KualaLumpurScene.h"

void KualaLumpurScene::sceneLogic()
{

}

void KualaLumpurScene::sceneRender()
{
    DrawRectangle(0, 0, screenWidth(), screenHeight(), BLUE);
    DrawText("Kuala Lumpur", 20, 20, 40, BLACK);
}