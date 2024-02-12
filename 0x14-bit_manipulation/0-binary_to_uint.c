#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - binary number converted to an unsigned int
 * @b: binary number
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		c = 2 * c + (*b - '0');
		b++;
	}
	return (c);
}
