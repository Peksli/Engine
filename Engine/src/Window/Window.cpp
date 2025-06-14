#include "src/Window/Window.h"


namespace Engine {

	Window::Window(unsigned int width, unsigned int height, std::string title) {
		wdata.m_width = width;
		wdata.m_height = height;
		wdata.m_title = title;
	}

	Window::~Window()
	{

	}

}