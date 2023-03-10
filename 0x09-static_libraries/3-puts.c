#include "stdio.h"
#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: the string to print
 */

void _puts(char *str)
{
	printf("%s\n", str);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
