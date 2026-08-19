#include "raylib.h"
#include "AppWindow.h"

int main()
{
    AppWindow window(1920, 1080, 60);
    window.createWindow();
    window.run(); 
}