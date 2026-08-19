#include "MainMenuScene.h"

void MainMenuScene::sceneLogic()
{

}

void MainMenuScene::sceneRender()
{
    DrawRectangle(0, 0, screenWidth(), screenHeight(), PURPLE);
    DrawText("Main Menu SCREEN", 20, 20, 40, MAROON);
}

