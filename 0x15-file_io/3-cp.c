#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copies the content of a file to another file
 *
 * @argv: arguments
 * @argc: arguments passsed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd_w, fd_r, x, y, z;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (argc == 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_r = open(argv[1], O_RDONLY);

	if (fd_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(fd_r, buffer, 1024)) > 0)
	{
		if (fd_w == -1 || write(fd_w, buffer, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	y = close(fd_r);
	z = close(fd_w);
	if (y == -1 || z == -1)
	{
		if (y == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (z == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}
