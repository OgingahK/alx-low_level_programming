#include <stdio.h>
#include <stdlib.h>

/**
 * printBinary - gives the binary representation of a hexadecimal number
 * main - prints out the binary representation
 *
 * @num: the hexadecimal number
 *
 * Return: 0
 */

void printBinary(unsigned int num)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
}

int main(void)
{
	unsigned int num = 0x22;

	printf("Binary representation is: ");
	printBinary(num);

	return (0);
}
