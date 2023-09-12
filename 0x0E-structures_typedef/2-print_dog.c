#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
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
printf("%s\n", d->name);
printf("%s\n", d->owner);
printf("%f\n", d->age);
}
else
{
printf("(nil)\n");

}



}

}
