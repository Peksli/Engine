#pragma once
#include "src/Systems/EventSystem/EventMacros.h"

#include <string>


namespace Engine {

	class Event {
	public:
		enum class EventType {
			None = 0,
			WindowCloseEvent, WindowMoveEvent, WindowResizeEvent,
			MouseMoveEvent, MouseScrollWheelEvent, MouseRightClickEvent, MouseLeftClickEvent,
			KeyboardKeyPressEvent, KeyboardKeyReleaseEvent
		};
		enum class EventCategory {
			None				= 0,
			InputCategory		= BIT(0),
			KeyboardCategory	= BIT(1),
			MouseCategory		= BIT(2),
			WindowCategory		= BIT(3)
		};

		virtual EventType GetEventType() const = 0;
		virtual std::string GetEventTypeStr() const = 0;
		virtual EventCategory GetEventCategory() const = 0;
		virtual std::string EventToText() const = 0;
	};

}