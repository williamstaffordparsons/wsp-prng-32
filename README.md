# WSP-PRNG-32
© 2024 William Stafford Parsons

## About
WSP-PRNG-32 is a 32-bit pseudorandom number generator algorithm as a substantial improvement to JSF32, Lehmer, PCG32, Xoroshiro and Xorshift32.

Read more [here](https://williamstaffordparsons.github.io/wsp-prng-32/).

## Example
``` c
#include <stdio.h>
#include "wsp_prng_32.h"

int main(void) {
  struct wsp_prng_32_s s = {
    .primary = 0,
    .secondary = 0,
    .increment = 0
  };
  unsigned char i = 0;

  while (i != 10) {
    i++;
    printf("Result %u is %u.\n", i, wsp_prng_32_randomize(&s));
  }

  return 0;
}
```
