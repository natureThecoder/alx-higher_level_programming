#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: doubly linkedlist.
 * @index: nth node.
 * Return: the nth node of a dlistint_t linked list .
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *actual = head;
	int nth = 0;

	while (nth++ != (int)index && actual)
		actual = actual->next;

	if (!actual)
		return (NULL);

	return (actual);
}
