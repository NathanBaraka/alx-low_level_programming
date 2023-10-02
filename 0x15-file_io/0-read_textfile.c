#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- The file is read and prints out the STD
 * @filename: This is the file that is going to be read
 * @letters:the specific no. of letters that will be read
 * Return: w- The no. of bytes read and printed
 *        zero is returned when its null.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
