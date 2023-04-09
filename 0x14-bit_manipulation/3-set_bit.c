#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index.
 * @n: pointer to the number to be modified.
 * @index: starting index of bit.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
