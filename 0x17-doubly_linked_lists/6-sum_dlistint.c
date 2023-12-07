#include "lists.h"
/**
 * sum_dlistint - Returns the sun of all the data of a dlistint_t linked list_
 * @head: The first element of the list____
 * Return: The sum of the data if the list is not empty___
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;
	const dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		s += tmp->n;
		tmp = tmp->next;
	}
	return (s);
}
