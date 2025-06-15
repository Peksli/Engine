#include "src/Application.h"
#include "src/Systems/System.h"
#include "src/Systems/EventSystem/EventSystem.h"

namespace Engine {

	Application::Application()
	{
		window = std::make_shared<WindowsWindow>(1400, 900, "Engine");
		EventSystem::SetWindow(window);
	}

	void Application::Run()
	{
		window->Run();
	}

	Application::~Application()
	{

	}

}


