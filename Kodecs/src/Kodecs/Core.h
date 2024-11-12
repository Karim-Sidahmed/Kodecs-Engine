// Core.h file
#pragma once

// Define export/import macros depending on the platform and build type.
#ifdef KDS_PLATFORM_WINDOWS
#ifdef KDS_BUILD_DLL
	// When building the DLL, export symbols.
#define KODECS_API __declspec(dllexport)
#else
	// When using the DLL, import symbols.
#define KODECS_API __declspec(dllimport)
#endif
#else
#error Kodecs only supports Windows!
#endif
