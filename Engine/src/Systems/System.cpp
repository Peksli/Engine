#include "src/Systems/System.h"
#include "src/Systems/LogSystem/LogSystem.h"


namespace Engine {

	System::System()
	{

	}

	System::~System()
	{

	}

	void System::AddSubsystem(System* sys) {
		subsystems.push_back(sys);
	}

	void System::InitializeAllSystems() {
		for (auto subsystem : subsystems) {
			subsystem->Initialize();
		}
	}

	std::vector<System*> System::subsystems{ };
}