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

if (d->name)
{
printf("Name: %s\n", d->name);
}
else
{
printf("Name: (nil)\n");
}

printf("Age: %f\n", d->age);

if (d->owner)
printf("Owner: %s\n", d->owner);

else
printf("Owner: (nil)\n");

}

}

