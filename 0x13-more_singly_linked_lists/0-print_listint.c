#include "lists.h"

/**
 * print_listint-a function prints all elements of a listint_t list_
 * @h: pointer_____
 * Return: singly linked list node structure
 *
 */

size_t print_listint(const listint_t *h)
{
size_t all = 0;
do {
printf("%d\n", h->n);
h = h->next;
all++;
} while (h);
return (all);
}
