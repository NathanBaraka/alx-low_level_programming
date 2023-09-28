#include "main.h"
/**
 * set_bit - The given bit is set to one index
 * @n: The number to be changed is pointed
 * @index: bit index is set to 1
 *
 * Return: When the program succeeds it gives one and -1 when failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

