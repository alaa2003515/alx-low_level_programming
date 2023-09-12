#include <stdio.h>
#include "dog.h"

/**
 *print_dog- a function that prints a struct dog______
 * @d: pointer___
 * Return: returns always (0) ______
 */

void print_dog(struct dog *d)
{
if (d)
{

if ((d->name) && (d->owner))
{
printf("name _ %s\n", d->name);

printf("owner _ %s\n", d->owner);
printf("age _%f\n", d->age);
}
else
{
printf("name  _(nil)\n");
printf("owner _(nil)\n");
}

}

}
