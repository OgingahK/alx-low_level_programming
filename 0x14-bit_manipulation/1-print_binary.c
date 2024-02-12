#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: prints in binary
 */

void print_binary(unsigned long int n)
{
	int x, z = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			z++;
		}
		else if (z)
			_putchar('0');
	}
	if (!z)
		_putchar('0');
}
