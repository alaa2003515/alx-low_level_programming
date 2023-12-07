#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list____
 * @head: The head of the linked list____
 * @index: The index of the node to return___
 * Return: A pointer to the nth element if it exists____
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	while (tmp != NULL && (i < index))
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
