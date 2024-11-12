#pragma once

#ifdef KDS_PLATFORM_WINDOWS
	#ifdef KDS_BUILD_DLL
		#define KODECS_API __declspec(dllexport)
	#else
		#define KODECS_API __declspec(dllimport)
	#endif
#else
	#error Kodecs only supports Windwos!
#endif




