#include "lists.h"

/**
 * list_len-a function returns the number of elements in a linked list_t list.
 * @h: pointer_____
 * Return: returns koka ______
 */

size_t list_len(const list_t *h)

{
size_t koka = 0;
while (h != NULL)
{
h = h->next;
koka++;
}
return (koka);
}
