#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to binary string.
 *
 * Return: converted number as an unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = (num <<= 1) | (*b - '0');
	}
	return (num);
}
