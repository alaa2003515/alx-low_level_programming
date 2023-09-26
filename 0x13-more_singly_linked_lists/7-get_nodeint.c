#include "lists.h"

/**
 *get_nodeint_at_index-a func returns nth node of a listint_t linked list__
 * @head: pointer_____
 * @index: int var____
 * Return: no return___
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *n_o_d_e;
unsigned int n;
for (n_o_d_e = head, n = 0; n_o_d_e && n < index; n_o_d_e = n_o_d_e->next, n++)
;
return (n_o_d_e);
}
