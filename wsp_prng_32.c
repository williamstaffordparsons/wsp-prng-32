#include "wsp_prng_32.h"

uint32_t wsp_prng_32_randomize(struct wsp_prng_32_s *s) {
  s->a = ((s->a << 14) | (s->a >> 18)) ^ s->b;
  s->c += 1111111111;
  s->b = ((s->b << 21) | (s->b >> 11)) + s->c;
  return s->a + 1111111111;
}
