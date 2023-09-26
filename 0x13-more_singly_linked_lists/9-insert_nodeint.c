#include "lists.h"

/**
 *insert_nodeint_at_index-a function inserts a new node at a given position__
 * @head: pointer_____
 * @idx:var unsigned_____
 * @n:int var________
 * Return: no return___
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *n_o_d_e;
listint_t *all_n = malloc(sizeof(listint_t));
unsigned int frs = 0;
if ((!head) || (!all_n))
return (NULL);
all_n->n = n;
all_n->next = NULL;
if (!idx)
{
all_n->next = *head;
*head = all_n;
return (all_n);
}
n_o_d_e = *head;
while (n_o_d_e)
{
if (frs == idx - 1)
{
all_n->next = n_o_d_e->next;
n_o_d_e->next = all_n;
return (all_n);
}
frs++;
n_o_d_e = n_o_d_e->next;
}
free(all_n);
return (NULL);
}
