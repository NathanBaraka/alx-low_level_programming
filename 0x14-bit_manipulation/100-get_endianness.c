#include "main.h"
/**
 * get_endianness - Is a machine small or a huge endian
 * Return: If it is huge then return zero otherwise return one.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

