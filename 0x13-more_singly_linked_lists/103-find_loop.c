#include "lists.h"

/**
 *find_listint_loop-a function help______
 * @head: pointer_____
 * Return: no return___
 */

listint_t *find_listint_loop(listint_t *head)
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
