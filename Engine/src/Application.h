#pragma once
#include <memory>

#include "src/Window/Platform/Windows/WindowsWindow.h"


namespace Engine {

	class Application {
	public:
		Application();
		virtual ~Application();

		void Run();

		Application(const Application& app) = delete;
		Application(Application&& app) = delete;
		Application operator=(const Application& app) = delete;
		Application operator=(Application&& app) = delete;
	private:
		std::shared_ptr<WindowsWindow> window;
	};

}