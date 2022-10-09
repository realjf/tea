#include <core/asserts.h>
#include <core/logger.h>

#include <platform/platform.h>

int main(void) {
  TFATAL("A test message: %f", 3.4f);
  TERROR("A test message: %f", 3.4f);
  TWARN("A test message: %f", 3.4f);
  TINFO("A test message: %f", 3.4f);
  TDEBUG("A test message: %f", 3.4f);
  TTRACE("A test message: %f", 3.4f);

  platform_state state;
  if (platform_startup(&state, "Tea Engine Testbed", 100, 100, 1280, 720)) {
    while (TRUE) {
      platform_pump_messages(&state);
    }
  }

  platform_shutdown(&state);

  return 0;
}