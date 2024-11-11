#include "wsp_prng_32.h"

uint32_t wsp_prng_32_randomize(struct wsp_prng_32_s *s) {
  s->word = ((s->word << 14) | (s->word >> 18)) ^ s->rotation;
  s->increment += 1111111111;
  s->rotation = ((s->rotation << 21) | (s->rotation >> 11)) + s->increment;
  return s->word + 1111111111;
}
