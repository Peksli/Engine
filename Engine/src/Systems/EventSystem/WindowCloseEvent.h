#pragma once
#include "src/Systems/EventSystem/Event.h"
#include "src/Systems/EventSystem/EventMacros.h"

#include <sstream>


namespace Engine {

	class WindowCloseEvent : public Event {
	public:
		EVENT_TYPE_SECTION(WindowCloseEvent);
		EVENT_CATEGORY_SECTION(WindowCategory);
		std::string EventToText() const override
		{
			std::stringstream ss;
			ss << "Event: WindowCloseEvent	STATUS: Released";
			return ss.str();
		}
	};

}