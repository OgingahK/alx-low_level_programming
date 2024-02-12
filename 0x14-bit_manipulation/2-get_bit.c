#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 *
 * @n: number of the bit
 * @index: index of where the bit is
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_value = 0x01;

	bit_value <<= index;
	if (bit_value == 0)
		return (-1);

	if ((n & bit_value))
		return (1);
	else
		return (0);
}

