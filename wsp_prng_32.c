#include "wsp_prng_32.h"

uint32_t wsp_prng_32_randomize(struct wsp_prng_32_s *s) {
  s->primary = ((s->primary << 14) | (s->primary >> 18)) ^ s->secondary;
  s->increment += 1111111111;
  s->secondary = ((s->secondary << 21) | (s->secondary >> 11)) + s->increment;
  return s->primary + 1111111111;
}
