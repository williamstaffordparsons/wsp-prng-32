#ifndef WSP_PRNG_32_H
#define WSP_PRNG_32_H

#include <stdint.h>

struct wsp_prng_32_s {
  uint32_t a;
  uint32_t b;
  uint32_t increment;
};

uint32_t wsp_prng_32_randomize(struct wsp_prng_32_s *s);

#endif
