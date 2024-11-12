#include <Kodecs.h>

class Sandbox : public Kodecs::Application {

public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Kodecs::Application* Kodecs::CreateApplication() {

	return new Sandbox();
}