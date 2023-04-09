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
	int n = 0;

	if (!b)
		return (0);

	while (b[n] != '\0')
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
		num = num * 2 + (b[n] - '0');
		n++;
	}
	return (num);
}
