#pragma once
#include "src/Systems/LogSystem/LogSystem.h"


#define ENGINE_TRACE(...)		Engine::LogSystem::EngineLogger->trace(__VA_ARGS__)
#define ENGINE_DEBUG(...)		Engine::LogSystem::EngineLogger->debug(__VA_ARGS__)
#define ENGINE_INFO(...)		Engine::LogSystem::EngineLogger->info(__VA_ARGS__)
#define ENGINE_WARN(...)		Engine::LogSystem::EngineLogger->warn(__VA_ARGS__)
#define ENGINE_ERROR(...)		Engine::LogSystem::EngineLogger->error(__VA_ARGS__)
#define ENGINE_CRITICAL(...)	Engine::LogSystem::EngineLogger->critical(__VA_ARGS__)


#define USER_TRACE(...)			Engine::LogSystem::UserLogger->trace(__VA_ARGS__)
#define USER_DEBUG(...)			Engine::LogSystem::UserLogger->debug(__VA_ARGS__)
#define USER_INFO(...)			Engine::LogSystem::UserLogger->info(__VA_ARGS__)
#define USER_WARN(...)			Engine::LogSystem::UserLogger->warn(__VA_ARGS__)
#define USER_ERROR(...)			Engine::LogSystem::UserLogger->error(__VA_ARGS__)
#define USER_CRITICAL(...)		Engine::LogSystem::UserLogger->critical(__VA_ARGS__)