#pragma once
#include "Application.h"
#include <stdio.h>

#ifdef HS_PLATFORM_WINDOWS

extern Hummus::Application* Hummus::CreateApplication();

#define NUMBER_FIVE 5

int main(int argc, char** argv)
{

	printf("NUMBER_FIVE = %d ", NUMBER_FIVE );




	//Hummus::Log::Init();
	//Hummus::Log::GetCoreLogger()->warn("Iniitialized Core Logger!"); 
	//(*Hummus::Log::GetClientLogger()).info("Initialized Client Logger"); 

	auto app = Hummus::CreateApplication();
	app->Run();
	delete app;  
}

#endif