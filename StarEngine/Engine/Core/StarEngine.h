#pragma once
#include "../Engine/Render/Window/Window.h"
namespace Engine {
	class StarEngine
	{
	public:
		//Window stuff
		bool Open();
		void Run();
		bool Close();
		bool isOpen = false;
		Window window;
		int windowHeight = 600;
		int windowWidth = 800;
	};
}

