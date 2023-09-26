#include "lists.h"

/**
 *sum_listint-a func returns nth node of a listint_t linked list__
 * @head: pointer_____
 * Return: no return___
 */

int sum_listint(listint_t *head)
{
int n_o_d_e = 0;
while (head)
{
n_o_d_e += head->n;
head = head->next;
}
return (n_o_d_e);
}
