#pragma once

#ifdef  KDS_PLATFORM_WINDOWS

extern Kodecs::Application* Kodecs::CreateApplication();

int main(int argc, char** argv) {

	printf("Kodecs Engine\n");
	auto app = Kodecs::CreateApplication();
	app->Run();
	delete app;

}

#endif //  KDS_PLATFORM_WINDOWS

