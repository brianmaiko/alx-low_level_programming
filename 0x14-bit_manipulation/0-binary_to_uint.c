#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to binary string.
 *
 * Return: converted number as an unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int xy = 0;
	int n, base_two = 1;

	if (!b)
		return (0);
	for (n = 0; b[n] != '\0'; n++);
	for (n--, base_two = 1; n >= 0; n--, base_two *= 2)
	{
		if (b[n] != '0' && b[n] != '1')
		{
			return (0);
		}
		if (b[n] & 1)
		{
			xy += base_two;
		}
	}
	return (xy);
}
