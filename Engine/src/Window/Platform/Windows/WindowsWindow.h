#pragma once
#include "src/Window/Window.h"


namespace Engine {

	class WindowsWindow : public Window {
	public:
		WindowsWindow(unsigned int width, unsigned int height, std::string title);
		~WindowsWindow();

		void Run() override;
		void Init() override;
		void Destroy() override;
		void OnUpdate() override;
	};

}