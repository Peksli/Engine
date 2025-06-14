#include "src/Application.h"

namespace Engine {

	Application::Application()
	{
		window = std::make_unique<WindowsWindow>(1400, 900, "Engine");
	}

	void Application::Run()
	{
		window->Run();
	}

	Application::~Application()
	{

	}

}


