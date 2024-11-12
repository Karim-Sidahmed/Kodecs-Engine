#include <Kodecs.h>  // Includes the Kodecs engine library

// Sandbox application class that inherits from the Application class
class Sandbox : public Kodecs::Application {

public:
    Sandbox() {
        // Initialization code for the sandbox app would go here
    }

    ~Sandbox() {
        // Cleanup code for the sandbox app would go here
    }
};

// Function to create a new instance of the Sandbox application
Kodecs::Application* Kodecs::CreateApplication() {
    return new Sandbox();  // Returns a new instance of the Sandbox class
}
