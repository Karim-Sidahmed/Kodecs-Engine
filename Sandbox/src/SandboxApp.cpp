#include <Kodecs.h>

class Sandbox : public Kodecs::Application {

public:
    Sandbox() {
        
    }

    ~Sandbox() {
        
    }
};

// Function to create a new instance of the Sandbox application
Kodecs::Application* Kodecs::CreateApplication() {
    return new Sandbox(); 
}
