#include "src/Systems/LogSystem/LogSystemAdapter.h"


namespace Engine {

	LogSystemAdapter::LogSystemAdapter()
	{
		System::AddSubsystem(this);
	}

	LogSystemAdapter::~LogSystemAdapter()
	{

	}

	void LogSystemAdapter::Initialize()
	{
		LogSystem::Initialize();
	}

}