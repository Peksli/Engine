#pragma once

#define BIT(1 << x)

#define EVENT_TYPE_SECTION(event) \
	EventType GetEventType() const override { return Event::EventType::##event; } \
	std::string GetEventTypeStr() const override { return #event; }

#define EVENT_CATEGORY_SECTION(category) \
	EventCategory GetEventCategory() const override { Event::EventCategory::##category; }

#define EVENT_TO_TEXT(text) \
	std::string EventToText() const override \
	{ \
		std::stringstream ss; \
		ss << #text; \
		return ss.str(); \
	};
