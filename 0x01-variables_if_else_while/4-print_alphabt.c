#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: o (Success)
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
	if (c != 'q' && c != 'e')
	{
		putchar(c);
	}
			c++;
	}
	putchar('\n');
	return (0);
}
