#include "lists.h"

/**
 *free_listint2 - a function that frees a listint_t list____
 * @head: pointer_____
 * Return: no return___
 */

void free_listint2(listint_t **head)
{
listint_t *n_o_d_e;
listint_t *t_a_l;
if (!head)
return;
n_o_d_e = *head;
while (n_o_d_e)
{
t_a_l = n_o_d_e;
n_o_d_e = n_o_d_e->next;
free(t_a_l);
}
*head = NULL;
}
