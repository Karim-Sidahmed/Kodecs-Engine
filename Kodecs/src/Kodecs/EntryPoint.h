#pragma once

#ifdef  KDS_PLATFORM_WINDOWS

extern Kodecs::Application* Kodecs::CreateApplication();

int main(int argc, char** argv) {

	printf("Kodecs Engine\n");

	Kodecs::Log::Init();

	KDS_CORE_WARN("Initialized Log!");

	int a = 5;
	KDS_INFO("Hello! Var={0}", a);

	

	auto app = Kodecs::CreateApplication();
	app->Run();
	delete app;

}

#endif //  KDS_PLATFORM_WINDOWS

