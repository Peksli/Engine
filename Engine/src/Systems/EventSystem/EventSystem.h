#pragma once
#include "src/Systems/System.h"
#include "src/Window/Platform/Windows/WindowsWindow.h"

#include <memory>


namespace Engine {

	class EventSystem : public System {
	public:
		EventSystem();
		~EventSystem();

		void static SetWindow(std::shared_ptr<WindowsWindow> window) { m_Window = window; }
		void Initialize() override;
	private:
		static std::shared_ptr<WindowsWindow> m_Window;
	};

}