#include "main.h"

/**
 * print_last_digit - returns the last digit of a number
 * @n: is the integer to check
 * Return: value of last digit.
 */

int print_last_digit(int n)
{
	int y;

	y = n % 10;
	if (y < 0)
	{
		_putchar(-y + 48);
		return (-y);
	}
	else
	{
		_putchar(y + 48);
		return (y);
	}
}
