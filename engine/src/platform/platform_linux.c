
#include "platform.h"

#if TPLATFORM_LINUX
b8 platform_startup(platform_state *plat_state, const char *application_name,
                    i32 x, i32 y, i32 width, i32 height) {
  b8 returnValue;
  return returnValue;
}

void platform_shutdown(platform_state *plat_state) {}

b8 platform_pump_messages(platform_state *plat_state) {
  b8 returnValue;
  return returnValue;
}

void *platform_allocate(u64 size, b8 aligned) {}

void platform_free(void *block, b8 aligned) {}

void *platform_zero_memory(void *block, u64 size) {}

void *platform_copy_memory(void *dst, const void *src, u64 size) {}

void *platform_set_memory(void *dst, i32 value, u64 size) {}

void platform_console_write(const char *message, u8 colour) {}

void platform_console_write_error(const char *message, u8 colour) {}

f64 platform_get_absolute_time() {
  f64 returnValue;
  return returnValue;
}

void platform_sleep(u64 ms) {}
#endif