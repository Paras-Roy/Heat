#pragma once

#ifdef HEAT_PLATFORM_WINDOWS
		#ifdef HEAT_BUILD_DLL
			#define HEAT_API __declspec(dllexport)
		#else
			#define HEAT_API __declspec(dllimport)
		#endif
#else
#error Windows only supported!
#endif