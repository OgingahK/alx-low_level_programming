#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: value to set the bit
 * @index: index of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_value = 0x01;

	bit_value <<= index;
	if (bit_value == 0)
		return (-1);

	*n &= ~bit_value;
	return (1);
}
