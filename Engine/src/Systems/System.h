#pragma once

#include <vector>


namespace Engine {

	class System {
	public:
		System();
		virtual ~System();
		
		virtual void Initialize() = 0;

		static void AddSubsystem(System* sys);
		static void InitializeAllSystems();
	private:
		static std::vector<System*> subsystems;
	};

}