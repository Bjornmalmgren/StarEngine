#include "StarEngine.h"

bool Engine::StarEngine::Open()
{
    isOpen = true;
    window.initiateWindow();
    return true;
}

void Engine::StarEngine::Run()
{
    while (true) {
        

        //last thing in loop 
        window.swapBuffers();
    }
}

bool Engine::StarEngine::Close()
{

    return false;
}
