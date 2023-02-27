#include "main.h"

/**
 * swap_int - swaps the values of two ints.
 * @a: first int.
 * @b: second int.
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
