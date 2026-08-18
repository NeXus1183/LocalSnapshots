#include "raylib.h"
#include "ApplicationStuff/AppWindow.h"

int main()
{
    AppWindow window(1920, 1080, 60);
    window.createWindow();
    window.run(); 
}