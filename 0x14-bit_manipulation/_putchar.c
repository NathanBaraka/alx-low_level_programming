/**
 * _putchar - The c letter is written in stdout
 * @c: Which character is printed
 * Return:If it succeeds the give one.
 * On failure, return -1, and error number is shown.
 */
#include "main.h"
#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}

