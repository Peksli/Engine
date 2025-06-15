#include "src/Engine.h"


class UserApplication : public Engine::Application {
public:
	UserApplication()
		:Engine::Application(){}
};


int main() {
	
	UserApplication uapp;

	Engine::LogSystemAdapter logsys_adapter;
	Engine::EventSystem evensys;
	Engine::System::InitializeAllSystems();


	uapp.Run();

	return 0;
}