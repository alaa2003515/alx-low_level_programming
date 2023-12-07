#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a  new node at the end of a dlistint_t list____
 * @head: A pointer to the head of the list____
 * @n: The integer to add as value of the new node._______
 * Return: A pointer to the new added node___
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *node;

	node = malloc(sizeof(dlistint_t));
	if (node)
	{
		node->n = n;
		node->next = NULL;
		node->prev = NULL;
		if (*head == NULL)
		{
			*head = node;
		}
		else
		{
			tmp = *head;
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = node;
			node->prev = tmp;
		}
	}
	return (node);
}
