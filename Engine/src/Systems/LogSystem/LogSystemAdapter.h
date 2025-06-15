#pragma once
#include "src/Systems/LogSystem/LogSystem.h"


namespace Engine {

	class LogSystemAdapter : public LogSystem {
	public:
		LogSystemAdapter();
		~LogSystemAdapter();

		void Initialize();
	};

}