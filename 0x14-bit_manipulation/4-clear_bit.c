#include "main.h"
/**
 * clear_bit - The bit value is set to zero
 * @n: The number to be changed is pointed
 * @index: highlights which index it to be cleared
 *
 * Return: When the program succeeds then return 1 otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

