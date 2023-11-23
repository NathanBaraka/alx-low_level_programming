#include"main.h"
/**
 * get_bit – The program returns the val of a given index.
  * @n – no. to check in bits.
  * @index – Where the bit is to be checked.
  * Return- The bit value is returned but if there is an error it returns -1.
 */

int get_bit(unsigned long int n, unsigned int index)
 {
unsigned long int divisor, check;
if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
divisor = 1 << index;
check = n & divisor;
if (check == divisor)
	return (1);
return (0);
 }

