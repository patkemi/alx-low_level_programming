#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in the decimal number
 * @n: number to search
 * @index: index of bit
 *
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 65)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
