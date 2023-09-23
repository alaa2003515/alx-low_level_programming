#include "lists.h"


/**
 * green- fanction help_______
 * @soso: character_____
 * Return: returns koka ______
 */

int green(char *soso)
{
int koka = 0;
if (!soso)
{
return (0);
}
while (*soso)
{
koka++;
soso++;
}
return (koka);
}




/**
 * print_list - a function that prints all the elements of a list_t list_
 * @h: pointer_____
 * Return: returns koka ______
 */

size_t print_list(const list_t *h)
{
size_t koka = 0;
while (h != NULL)
{
printf("[%d] %s\n", green(h->str), h->str ? h->str : "(nil)");
h = h->next;
koka++;

}
return (koka);
}
