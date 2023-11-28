#include "main.h"
#include <stdlib.h>

/**
   * read_textfile- Read the contents of a text file and output them to the console (STDOUT).
   * @filename: the file being read.
  * @letters: The no. of letters to be read.
  * Return- The actual number of bytes read and printed is represented by "w," with a value of 0 indicating failure or a NULL filename.
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


