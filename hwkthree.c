#include <stdio.h>
#include <stdint.h>

char hwkThree(unsigned int value) {
  return (char)((value >> 23) - 127);
 }
