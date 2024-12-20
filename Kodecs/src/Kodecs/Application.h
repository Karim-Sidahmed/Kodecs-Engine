#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Kodecs/Events/ApplicationEvent.h"

#include "Window.h"

namespace Kodecs {

	class KODECS_API Application {

	public:
		Application();
		virtual ~Application();

		// Run method that starts the main loop of the application
		void Run();

		void OnEvent(Event& e);
	private:
		bool OnWindowClose(WindowCloseEvent& e);
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// This function will create an Application object for the client.
	Application* CreateApplication();

}
