#include <stdio.h>
#include <stdint.h>

char hwkThree(uint32_t value) {
  return (char)((value >> 23) - 127);
 }
