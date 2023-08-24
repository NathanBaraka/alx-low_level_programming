include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int b;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[n] = src[b];
		n++;
		b++;
	}

	dest[n] = '\0';
	return (dest);
}

