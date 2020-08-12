#pragma once
#include "Application.h"
#include <stdio.h>

#ifdef HS_PLATFORM_WINDOWS

extern Hummus::Application* Hummus::CreateApplication();

int main(int argc, char** argv)
{
	Hummus::Log::Init();
	HS_CORE_WARN("Iniitialized Core Logger!"); 
	HS_INFO("Hello! var = {0}", 42); 

	auto app = Hummus::CreateApplication();
	app->Run();
	delete app;  
}

#endif