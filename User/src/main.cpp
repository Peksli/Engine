#include "src/Engine.h"


class UserApplication : public Engine::Application {
public:
	UserApplication()
		:Engine::Application(){}
};


int main() {
	
	Engine::LogSystemAdapter logsys_adapter;
	Engine::System::InitializeAllSystems();

	UserApplication uapp;
	uapp.Run();

	return 0;
}