#include "lists.h"

/**
 * free_list -a function that frees a list_t list___
 * @head: pointer_____
 * Return: no returns  ______
 */

void free_list(list_t *head)

{
list_t *nono;
list_t *koka;

if (!head)
return;
nono = head;
while (nono)
{
koka = nono->next;
free(koka->str);
free(nono);
nono = koka;
}
}
