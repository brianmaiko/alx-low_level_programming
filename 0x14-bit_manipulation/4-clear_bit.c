#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to modify.
 * @index: index, starting from 0 of the bit set.
 *
 * Return: 1 if successful, -1 if error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1ul << index);
	return (1);
}
