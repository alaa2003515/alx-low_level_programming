#include "lists.h"

/**
 * add_node-a function adds a new node at the beginning of a list_t list.
 * @head: pointer_____
 *@str:string_______
 * Return: returns koka ______
 */

list_t *add_node(list_t **head, const char *str)

{
list_t *koka = malloc(sizeof(list_t));

if (!head || !koka)
{
return (NULL);
}
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
koka->next = *head;
*head = koka;
return (koka);
}
