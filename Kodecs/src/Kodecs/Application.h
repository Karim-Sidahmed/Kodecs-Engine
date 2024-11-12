#pragma once

#include "Core.h"

namespace Kodecs {

	class KODECS_API Application {

	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in our client
	Application* CreateApplication();

}

