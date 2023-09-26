#include "lists.h"

/**
 *listint_len-a function returns num of elements in a linked listint_t list_
 * @h: pointer_____
 * Return: return all___
 */

size_t listint_len(const listint_t *h)
{
size_t all = 0;
do {
h = h->next;
all++;
} while (h);
return (all);
}
