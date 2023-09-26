#include "lists.h"

/**
 *pop_listint-a function deletes head node of a listint_t linked list____
 * @head: pointer_____
 * Return:returns the head node’s data (nayama)___
 */

int pop_listint(listint_t **head)
{
listint_t *n_o_d_e;
int n;
if (!head || !*head)
return (0);
n_o_d_e = (*head)->next;
n = (*head)->n;
free(*head);
*head = n_o_d_e;
return (n);
}
