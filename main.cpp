#include "raylib.h"
#include "AppWindow.h"

int main()
{
    AppWindow window(1600, 720, 90);
    window.createWindow();
    window.run(); 
}