#include "src/Systems/EventSystem/EventSystem.h"
#include "src/Systems/LogSystem/LogMacros.h"


namespace Engine {

	EventSystem::EventSystem()
	{
		System::AddSubsystem(this);
	}

	EventSystem::~EventSystem()
	{

	}

	void EventSystem::Initialize()
	{
		m_Window->InitializeCallbacks();
		ENGINE_INFO("SYSTEM: {0}\t\033[42m\033[30mSTATUS: {1}\033[0m\tUSAGE: Ready to use", "EventSystem", "Initialized");
	}

	std::shared_ptr<Engine::WindowsWindow> EventSystem::m_Window;

}