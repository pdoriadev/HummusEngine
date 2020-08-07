#pragma once
#include "Core.h"

namespace Hummus 
{
	class HUMMUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	// to be defined by CLIENT
	Application* CreateApplication();
}



