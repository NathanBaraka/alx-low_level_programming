
#include "main.h"

/**
 * print_alphabet_letters - print all alphabet letters in lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

