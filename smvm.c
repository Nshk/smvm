/*
  ScrashWare MIX Virtual Machine 
  See COPYING for copyright informations 
*/

#include <stdio.h>
#include "smvm.h"
#include "loadOps.h"

/* Declaration of all the Registers, Flags and Memory
   Cells of the MIX machine. See smvm.h for details   */

registers regs;
sflag flags;

uint8_t mem[4000][6];

void usage(void);

int main(int argc, char **argv)
{
  flags.ow = 0;
  flags.less = 0;
  flags.equal = 0;
  flags.greater = 0;

  if (argc != 2)
    usage();


  return 0;
}

void usage(void)
{
  printf("uint8_t length: %d", sizeof(uint8_t));
  printf("\nUsage: smvm FILENAME\n");
}
