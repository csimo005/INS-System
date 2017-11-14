#include <hidef.h>      /* common defines and macros */
#include "derivative.h"      /* derivative-specific definitions */
#include "spi.h"
#include "i2c.h"
#include <stdio.h>


void main(void) {
  /* put your own code here */
  


	EnableInterrupts;
  printf("Hello World\r\n");

  for(;;) {
    _FEED_COP(); /* feeds the dog */
  } /* loop forever */
  /* please make sure that you never leave main */
}
