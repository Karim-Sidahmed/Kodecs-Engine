#include "kdspch.h"
#include "Application.h"

#include "Kodecs/Events/ApplicationEvent.h"
#include "Kodecs/Log.h"

namespace Kodecs {

	// This is where any initial setup for the Application object would occur.
	Application::Application() {

	}

	// This is where cleanup would be done when an Application object is destroyed.
	Application::~Application() {

	}

	// Run method for the Application class.
	// This method starts the application's main loop, which continuously runs while `true`.
	// Typically, this loop would include game logic, rendering, and event handling.
	void Application::Run() {

		WindowResizeEvent e(1280, 720);

		if (e.IsInCategory(EventCategoryApplication)) {

			KDS_TRACE(e.ToString());
		}
		if (e.IsInCategory(EventCategoryInput)) {
			
			KDS_TRACE(e.ToString());

		}
		
		while (true) {

		}
	}
}
