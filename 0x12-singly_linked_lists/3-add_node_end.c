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
list_t *nono = *head;

if (!head || !koka)
return (NULL);
if (str)
{
koka->str = strdup(str);
if (!koka->str)
{
free(koka);
return (NULL);
}
koka->len = strlen(koka->str);
}
if (nono)
{
while (nono->next)
nono = nono->next;
}
else
*head = koka;
return (koka);
}
