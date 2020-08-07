#pragma once

#ifdef HS_PLATFORM_WINDOWS
	#ifdef HS_BUILD_DLL
		#define HUMMUS_API _declspec(dllexport)
	#else
		#define HUMMUS_API _declspec(dllimport)
	#endif
#else 
	#error Hummus only supports Windows!
#endif