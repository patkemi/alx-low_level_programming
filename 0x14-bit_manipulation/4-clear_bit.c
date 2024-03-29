#include "main.h"

/**
 * clear_bit - sets the value of a bit given to  be 0
 * @n: points to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 65)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
