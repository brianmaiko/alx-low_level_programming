#include <stdio.h>
/**
 * main -Entry
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(' ');

			for (j = i + 1; j < 10; j++)
			{
			putchar('0' + i);
			putchar('0' + j);
			putchar(' ');

			for (k = j + 1; k < 10; k++)
			{
			putchar('0' + i);
			putchar('0' + j);
			putchar('0' + k);
			putchar(' ');

			for (l = k + 1; l < 10; l++)
			{
			putchar('0' + i);
			putchar('0' + j);
			putchar('0' + k);
			putchar('0' + l);
			putchar(' ');
		}
		}
		}
	}
	putchar('\n');
	return (0);
}

