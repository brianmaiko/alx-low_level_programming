#include <stdlib>
#include <time.h>
#include <(stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */

	int n;

	for (n = 0; n < 26; n++)
	{
	putchar('a' + n);
	}
	for (n = 0; n < 26; n++)
	{
	putchar('A' + n);
	}
	putchar('\n');

	return (0);
}
