// Application.h file
#pragma once

#include "Core.h"

namespace Kodecs {

	class KODECS_API Application {

	public:
		// Constructor and destructor
		Application();
		virtual ~Application();

		// Run method that starts the main loop of the application
		void Run();
	};

	// Declaration for a function to be defined in the client application.
	// This function will create an Application object for the client.
	Application* CreateApplication();

}
