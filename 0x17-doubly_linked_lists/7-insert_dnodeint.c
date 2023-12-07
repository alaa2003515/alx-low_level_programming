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
	dlistint_t *tmp, *node;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (node)
	{
		node->n = n;
		if (idx == 0 || head == NULL)
		{
			add_dnodeint(head, n);
		}
		else
		{
			tmp = *head;
			while ((tmp != NULL) && (i + 1 < idx))
			{
				tmp = tmp->next;
				i++;
			}
			if (i + 1  == idx)
			{
				if (tmp == NULL)
				{
					add_dnodeint_end(head, n);
				}
				else
				{
					node->prev = tmp;
					node->next = tmp->next;
					tmp->next = node;
					(node->next)->prev = node;
				}
			}
		}
	}
	return (node);
}
