#include "StarEngine.h"

bool Engine::StarEngine::Open()
{
    isOpen = true;
    window.initiateWindow();
    return true;
}

void Engine::StarEngine::Run()
{
    while (!glfwWindowShouldClose(window.window)) {
        glClearColor(0.1, 0.1, 0.1, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);
        input.ProccesInput(window.window);


        //last thing in loop 
        window.swapBuffers();

    }
}

bool Engine::StarEngine::Close()
{
    glfwTerminate();
    return false;
}
