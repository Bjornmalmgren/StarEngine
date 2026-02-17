#pragma once
#include "../Core/Input/Input.h"
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

		// input
		Input input;
	};
}

