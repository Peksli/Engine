#pragma once

#include "src/Systems/System.h"

#include <spdlog/spdlog.h>
#include <spdlog/logger.h>
#include <spdlog/sinks/stdout_color_sinks.h>


namespace Engine {

	class LogSystem : public System {
	public:
		using logger = spdlog::logger;
		using sink = spdlog::sinks::stdout_color_sink_mt;

		LogSystem();
		virtual ~LogSystem();

		static void Initialize();

		static std::shared_ptr<spdlog::logger> EngineLogger;
		static std::shared_ptr<spdlog::logger> UserLogger;
		static std::shared_ptr<spdlog::sinks::stdout_color_sink_mt> EngineSink;
		static std::shared_ptr<spdlog::sinks::stdout_color_sink_mt> UserSink;
	};

}