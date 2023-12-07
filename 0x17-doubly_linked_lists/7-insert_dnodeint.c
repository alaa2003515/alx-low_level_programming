#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a  new node at a given position_
 * @head: The first element of the list_
 * @idx: The position of insertion_
 * @n: The data of the new node____
 * Return: The address of the new node if success___
 */
dlistint_t *insert_dnodeint_at_index(
		dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *tmp = *hc, *node;

	if (idx == 0)
	return (add_dnodeint(hc, n));
for (; idx != 1; idx--)
		{
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
}
if (tmp->next == NULL)
return (add_dnodeint_end(hc, n));
node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);
node->n = n;
node->prev = tmp;
node->next = tmp->next;
tmp->next->prev = node;
tmp->next = node;
return (node);
}
