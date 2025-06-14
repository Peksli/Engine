#include "src/Systems/LogSystem/LogMacros.h"
#include "src/Systems/LogSystem/LogSystem.h"


namespace Engine {

	std::shared_ptr<spdlog::logger> LogSystem::EngineLogger;
	std::shared_ptr<spdlog::logger> LogSystem::UserLogger;
	std::shared_ptr<spdlog::sinks::stdout_color_sink_mt> LogSystem::EngineSink;
	std::shared_ptr<spdlog::sinks::stdout_color_sink_mt> LogSystem::UserSink;

	LogSystem::LogSystem()
		:System()
	{

	}

	LogSystem::~LogSystem()
	{

	}

	void LogSystem::Initialize() {
		EngineSink = std::make_shared<sink>();
		UserSink = std::make_shared<sink>();
		EngineLogger = std::make_shared<logger>("EngineLogger", EngineSink);
		UserLogger = std::make_shared<logger>("UserLogger", UserSink);
		ENGINE_INFO("System: {0}\t\033[42m\033[30mSTATUS: {1}\033[0m\tUSAGE: Ready to use", "LogSystem", "Initialized");
	}

}