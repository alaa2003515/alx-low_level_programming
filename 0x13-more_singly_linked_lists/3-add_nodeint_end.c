#include "lists.h"

/**
 *add_nodeint_end- a function adds a new node at end of a listint_t list_
 * @head: pointer_____
 * @n: var___
 * Return: return all_n____
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *all_n = malloc(sizeof(listint_t));
listint_t *n_o_d_e;
if ((!head) || (!all_n))
return (NULL);
all_n->next = NULL;
all_n->n = n;
if (!*head)
*head = all_n;
else
{
n_o_d_e = *head;
while (n_o_d_e->next)
n_o_d_e = n_o_d_e->next;
n_o_d_e->next = all_n;
}
return (all_n);
}
