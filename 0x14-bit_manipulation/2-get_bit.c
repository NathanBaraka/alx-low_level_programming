#include "main.h"
/**
 * get_bit - gives back the value of a bit in a deci no. at an index
 * @n: The number to be searched
 * @index: the bit index
 *
 * Return: The result of the bit is returned.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

