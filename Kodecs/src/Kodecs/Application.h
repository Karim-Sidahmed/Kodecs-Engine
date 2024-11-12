#pragma once

#include "Core.h"

namespace Kodecs {

	class KODECS_API Application {

	public:
		Application();
		virtual ~Application();

		// Run method that starts the main loop of the application
		void Run();
	};

	// This function will create an Application object for the client.
	Application* CreateApplication();

}
