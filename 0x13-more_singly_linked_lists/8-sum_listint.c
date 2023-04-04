#include "lists.h"

/**
 * sum_listint - returns the sum of all integers (n) stored
 * in each node of a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the integers (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
