#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t____
 * @head: The head of the list to free____
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
