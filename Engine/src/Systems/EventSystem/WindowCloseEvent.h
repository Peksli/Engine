#pragma once
#include "src/Systems/EventSystem/Event.h"
#include "src/Systems/EventSystem/EventMacros.h"

#include <sstream>


namespace Engine {

	class WindowCloseEvent : public Event {
	public:
		EVENT_TYPE_SECTION(WindowCloseEvent);
		EVENT_CATEGORY_SECTION(WindowCategory);
		EVENT_TO_TEXT("EVENT: WindowCloseEvent	STATUS: Released");
	};

}