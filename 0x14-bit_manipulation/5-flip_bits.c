#include "main.h"
/**
 * flip_bits - The number of bits to be changed is counted
 * move from 1 number to the next
 * @n: initial no.
 * @m: 2nd no.
 *
 * Return: The total no. to be changed of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}



