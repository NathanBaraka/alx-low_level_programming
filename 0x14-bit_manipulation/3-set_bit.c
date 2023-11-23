#include "main.h"
/**
  * set_bit – Progress sets a value of a bit to 1 at a given index.
  * @n - These are the no. of sets.
  * @index – Where the index sets a bit
  * Return: If it is successful then it returns 1 but if not, -1 for error.
 */
int set_bit(unsigned long int *n, unsigned int index)
 {
unsigned long int setbit;
if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
setbit = 1 << index;
*n = *n | setbit;
return (1);
 }

