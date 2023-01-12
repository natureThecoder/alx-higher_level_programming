#include "lists.h"

/**
 * sum_dlistint - returns the sum of nodes of a dlistint_t list.
 * @head: doubly linkedlish.
 * Return: return sum.
 **/
int sum_dlistint(dlistint_t *head)
{
	int acumm = 0;

	if (!head)
		return (0);

	while (head)
	{
		acumm += head->n;
		head = head->next;
	}

	return (acumm);
}
