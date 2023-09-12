#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that initialize a variable of type struct dog
 * @d: pointer___
 * Return: returns always (0) ______
 */
void free_dog(dog_t *d)
{
struct dog dogs;
if (d)
{

if (d->owner)
{
free(owner);
}
if (d->name)
{
free(name);
}
return (0);
}
}
