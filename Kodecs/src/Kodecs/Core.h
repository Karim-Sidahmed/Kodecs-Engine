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

#ifdef KDS_ENABLE_ASSERTS
	#define KDS_ASSERT(x, ...) {if(!(x)) {KDS_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define KDS_CORE_ASSERT(x, ...) {if(!(x)) {KDS_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }

#else
	#define KDS_ASSERT(x, ...)
	#define KDS_CORE_ASSERT(x, ...)
#endif // KDS_ENABLE_ASSERTS


#define BIT(x) (1 << x)
