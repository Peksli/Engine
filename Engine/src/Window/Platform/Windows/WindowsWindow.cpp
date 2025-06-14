#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "src/Systems/LogSystem/LogSystem.h"
#include "src/Systems/LogSystem/LogMacros.h"
#include "src/Window/Platform/Windows/WindowsWindow.h"


namespace Engine {

	WindowsWindow::WindowsWindow(unsigned int width, unsigned int height, std::string title)
		:Window(width, height, title)
	{
		Init();
	}

	WindowsWindow::~WindowsWindow()
	{
		Destroy();
		glfwTerminate();
	}

	void WindowsWindow::Run()
	{
		while (!glfwWindowShouldClose(wdata.windowGLFW))
		{
			glClearColor(0.15f, 0.18f, 0.17f, 1.0f);
			glClear(GL_COLOR_BUFFER_BIT);
			OnUpdate();
		}
	}

	void WindowsWindow::Init()
	{
		glfwInit();
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

		wdata.windowGLFW = glfwCreateWindow(wdata.m_width, wdata.m_height, wdata.m_title.c_str(), NULL, NULL);
		glfwMakeContextCurrent(wdata.windowGLFW);

		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
		{
			ENGINE_CRITICAL("Can not load gl funcs");
		}
		glViewport(0, 0, wdata.m_width, wdata.m_height);
	}

	void WindowsWindow::Destroy()
	{
		glfwDestroyWindow(wdata.windowGLFW);
	}

	void WindowsWindow::OnUpdate()
	{
		glfwPollEvents();
		glfwSwapBuffers(wdata.windowGLFW);
	}

}