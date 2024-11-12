#pragma once
// Entry point code for the application, runs when the program starts

#ifdef  KDS_PLATFORM_WINDOWS

extern Kodecs::Application* Kodecs::CreateApplication();

int main(int argc, char** argv) {

    printf("Kodecs Engine\n");

   
    Kodecs::Log::Init();

    // Log a warning message
    KDS_CORE_WARN("Initialized Log!");

    // Example variable and log an info message
    int a = 5;
    KDS_INFO("Hello! Var={0}", a);

    // Create the application instance and run it
    auto app = Kodecs::CreateApplication();
    app->Run();

  
    delete app;
}

#endif //  KDS_PLATFORM_WINDOWS
