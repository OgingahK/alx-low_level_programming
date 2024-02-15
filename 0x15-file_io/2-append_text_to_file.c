#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, t = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[t])
			t++;
		w = write(fd, text_content, t);
		if (t == -1 || w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
