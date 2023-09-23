#include "lists.h"

/**
 * add_node_end -a function adds a new node at the end of a list_t list.___
 * @head: pointer_____
 * @str: string _______
 * Return: no returns  ______
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *koka = malloc(sizeof(list_t));
list_t *nono;

if (!head || !koka)
return (NULL);

koka->str = strdup(str);
if (!koka->str)
{
free(koka);
return (NULL);
}

koka->len = strlen(koka->str);
koka->next = NULL;

if (*head == NULL)
{
*head = koka;
}
else
{
nono = *head;
while (nono->next != NULL)
nono = nono->next;
nono->next = koka;
}
return (koka);
}
