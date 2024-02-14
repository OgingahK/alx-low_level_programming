#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file to be read
 * @letters: number of letters read
 *
 * Return: 0 if write fails or does not write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int w, t;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
		if (fd < 0)
			return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	close(fd);
	free(buf);
	return (w);
}
