#ifdef ENGINE_DEBUG_BUILD
#define ENGINE_ASSERT(x, ...) \
        if (!(x)) { \
            ENGINE_CRITICAL(__VA_ARGS__); \
            __debugbreak(); \
        }
#endif
