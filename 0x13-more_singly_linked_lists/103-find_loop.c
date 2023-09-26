#include "lists.h"

/**
 *findout-a function help______
 * @head: pointer_____
 * Return: no return___
 */

listint_t *findout(listint_t *head)
{
listint_t *pointer;
listint_t *totall;
if (head == NULL)
return (NULL);
for (totall = head->next; totall != NULL; totall = totall->next)
{
if (totall == totall->next)
return (totall);
for (pointer = head; pointer != totall; pointer = pointer->next)
if (pointer == totall->next)
return (totall->next);
}
return (NULL);
}
/**
 *free_1 -a program that multiplies two positive numbers_
 * @h: pointer_____
 * Return: no return___
 */
size_t free_1(listint_t **h)
{
listint_t *next;
listint_t *node;
int loo = 1;
size_t lolo;
if ((h == NULL) || (*h == NULL))
return (0);
node = findout(*h);
for (lolo = 0; (*h != node || loo) && *h != NULL; *h = next)
{
lolo++;
next = (*h)->next;
if (*h == node && loo)
{
if (node == node->next)
{
free(*h);
break;
}
lolo++;
next = next->next;
free((*h)->next);
loo = 0;
}
free(*h);
}
*h = NULL;
return (lolo);
}
