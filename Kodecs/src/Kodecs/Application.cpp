#include "kdspch.h"
#include "Application.h"

#include "Kodecs/Events/ApplicationEvent.h"
#include "Kodecs/Log.h"

#include <GLFW/glfw3.h>

namespace Kodecs {

	// This is where any initial setup for the Application object would occur.
	Application::Application() {

		m_Window = std::unique_ptr<Window>(Window::Create());
		
	}

	// This is where cleanup would be done when an Application object is destroyed.
	Application::~Application() {

	}

	// Run method for the Application class.
	// This method starts the application's main loop, which continuously runs while `true`.
	// Typically, this loop would include game logic, rendering, and event handling.
	void Application::Run() {

		/*
		WindowResizeEvent e(1280, 720);

		if (e.IsInCategory(EventCategoryApplication)) {

			KDS_TRACE(e.ToString());
		}
		if (e.IsInCategory(EventCategoryInput)) {
			
			KDS_TRACE(e.ToString());

		}
		*/
		while (m_Running) {

			glClearColor(0, 1, 0, 0);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		
		}
	}
}
