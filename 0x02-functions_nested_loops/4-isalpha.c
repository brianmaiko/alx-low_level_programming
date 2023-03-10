#include "main.h"

/**
 * _isalpha - checks for char in alphabet
 * @c: is the character to check
 * Return: 1 if c is letter lowercase or uppercase, otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
