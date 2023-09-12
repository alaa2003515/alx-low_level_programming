#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @owner: owner of dog___________
 * @age: age of Doges________
 * @name: naMes of Doges_______________
 * @d: pointer___
 * Return: returns always (0) ______
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->owner = owner;
		d->name = name;
		d->age = age;
	}
}
