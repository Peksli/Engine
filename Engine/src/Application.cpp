#include "src/Application.h"
#include "src/Systems/System.h"
#include "src/Systems/EventSystem/EventSystem.h"
#include "src/Systems/LogSystem/LogMacros.h"


namespace Engine {

	#define BIND_EVENT_CALLBACK_FN(func) std::bind(&Application::func, this, std::placeholders::_1)

	Application::Application()
	{
		window = std::make_shared<WindowsWindow>(1400, 900, "Engine");
		window->SetEventCallbackFn(BIND_EVENT_CALLBACK_FN(OnEvent));
		EventSystem::SetWindow(window);
	}

	void Application::Run()
	{
		window->Run();
	}

	void Application::OnEvent(Event& event)
	{
		ENGINE_INFO(event.EventToText());
	}

	Application::~Application()
	{

	}

}


