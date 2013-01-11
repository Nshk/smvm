/* LOAD operators */

void oLDA(uint8_t sign, uint8_t m1, uint8_t m2, uint8_t i, uint8_t f)
{
  int i = 0;
  unit8_t l = f / 8;
  uint8_t r = f % 8;
  uint32_t m;

  if (m1 != 0)
    m = (m1 * 100) - (BMAX - 1);
  else
    m = m2;
  /* TODO: negative addresses */


  if ( mem[
