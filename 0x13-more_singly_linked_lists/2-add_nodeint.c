#include "lists.h"

/**
 *add_nodeint- a func adds a new node at beginning of a listint_t list_
 * @head: pointer_____
 * @n: var___
 * Return: return all_n____
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *all_n = malloc(sizeof(listint_t));
if ((head != NULL) || (all_n != NULL))
return (NULL);
all_n->next = NULL;
all_n->n = n;
if (*head)
all_n->next = *head;
*head = all_n;
return (all_n);
}
