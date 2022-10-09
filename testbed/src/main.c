#include <core/asserts.h>
#include <core/logger.h>

int main(void) {
  TFATAL("A test message: %f", 3.4f);
  TERROR("A test message: %f", 3.4f);
  TWARN("A test message: %f", 3.4f);
  TINFO("A test message: %f", 3.4f);
  TDEBUG("A test message: %f", 3.4f);
  TTRACE("A test message: %f", 3.4f);

  TASSERT(1 == 0);
  return 0;
}