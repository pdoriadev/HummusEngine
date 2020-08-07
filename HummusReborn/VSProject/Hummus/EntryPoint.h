#pragma once
#include "Application.h"


#ifdef HS_PLATFORM_WINDOWS

extern Hummus::Application* Hummus::CreateApplication();
 
int main(int argc, char** argv)
{
	auto app = Hummus::CreateApplication();
	app->Run();
	delete app;  
}

#endif