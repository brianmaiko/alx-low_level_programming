#include <stdio.h>
/**
 * main -Entry
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(c + i);
	}
	c = 'a';

	for (i = 0; i < 6; i++)
	{
		putchar(c + i);
	}
	putchar('\n');

	return (0);
}
