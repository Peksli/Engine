#pragma once
#include "src/Systems/EventSystem/Event.h"

#include <string>
#include <functional>
#include <GLFW/glfw3.h>


namespace Engine {

	class Window {
	public:
		using eventCallbackSignature = std::function<void(Event& event)>;

		Window(unsigned int width, unsigned int height, std::string title);
		virtual ~Window();

		virtual void Run() = 0;
		virtual void Init() = 0;
		virtual void Destroy() = 0;
		virtual void OnUpdate() = 0;
		virtual void InitializeCallbacks() = 0;
		void SetEventCallbackFn(const eventCallbackSignature& callbackFn) { wdata.eventCallbackFn = callbackFn; }
		unsigned int GetWidth() const { return wdata.m_width; }
		unsigned int GetHeight() const { return wdata.m_height; }
		std::string GetTitle() const { return wdata.m_title; }
		GLFWwindow* GetGLFWWindow() const { return wdata.windowGLFW; }
	protected:
		struct WindowData {
			eventCallbackSignature eventCallbackFn;
			GLFWwindow* windowGLFW;
			unsigned int m_width;
			unsigned int m_height;
			std::string m_title;
		} wdata;
	};

}