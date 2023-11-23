#include "main.h"
#include <stdlib.h>
 /**
   * clear_bit – The progress sets the value of a bit to 1 at a specific index.
   * @n- The para
   * @index - Index
   * Return - If successful returns 1 if not -1.
  */

int clear_bit(unsigned long int *n, unsigned int index)
 {
if (index > sizeof(n) * 8)
	return (-1);
*n &= ~(1 << index);
return (1);
 }

