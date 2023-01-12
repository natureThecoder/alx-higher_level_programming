#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * in a dlistint_t list.
 * @h: doubly linklist.
 * @idx: index to insertnew_node.
 * @n: data for the new node.
 * Return: the address of the new node.
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *actual = *h;
	dlistint_ *new_node = malloc(sizeof(dlistint_t));
	unsigned int cnt;

	if (!h || !new_node)
		return (NULL);

	new_node->n = n;

	if (!(*h))
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (cnt = 0; actual; cnt++)
	{
		if (cnt == idx)
		{
			new_node->prev = actual->prev;
			(actual->prev)->next = new_node;
			actual->prev = new_node;
			new_node->next = actual;
			return (new_node);
		}
		else if (!actual->next && 1 + cnt == idx)
			return (add_dnodeint_end(h, n));
		actual = actual->next;
	}
	return (NULL);
}
