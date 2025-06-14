#pragma once


namespace Engine {

	class Application {
	public:
		Application();
		virtual ~Application();

		Application(const Application& app) = delete;
		Application(Application&& app) = delete;
		Application operator=(const Application& app) = delete;
		Application operator=(Application&& app) = delete;
	};

}