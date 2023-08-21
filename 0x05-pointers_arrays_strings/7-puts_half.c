#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int t, n, longi;

	longi = 0;

	for (t = 0; str[t] != '\0'; t++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (t = n; str[t] != '\0'; t++)
		_putchar(str[a]);
	_putchar('\n');
}

