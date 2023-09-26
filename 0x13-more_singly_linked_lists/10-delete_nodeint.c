#include "lists.h"

/**
 *delete_nodeint_at_index-a funcn deletes node at index index of a listint_t_
 * @head: pointer_____
 * @index:var unsigned_____
 * Return: no return___
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *n_o_d_e;
listint_t *all_n;
unsigned int frs = 0;
if ((!head) || (!*head))
return (-1);
if (!index)
{
n_o_d_e = *head;
*head = (*head)->next;
free(n_o_d_e);
return (1);
}
n_o_d_e = *head;
while (n_o_d_e)
{
if (frs == index)
{
all_n->next = n_o_d_e->next;
free(n_o_d_e);
return (1);
}
frs++;
all_n = n_o_d_e;
n_o_d_e = n_o_d_e->next;
}
return (-1);
}
