#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *new_dog - a new dog_______
 * @name: name of  dog_______
 * @age:  age  of  dog_____
 * @owner: owner of  dog____
 *
 * Return: struct  of dog_____
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int one, lowana;
dog_t *my_dog;

my_dog = malloc(sizeof(dog_t));
if (my_dog == NULL)
return (NULL);

one = strlen(name);
lowana = strlen(owner);

my_dog->name = malloc(one + 1);
if (my_dog->name == NULL)
{
free(my_dog);
return (NULL);
}
strcpy(my_dog->name, name);

my_dog->age = age;

my_dog->owner = malloc(lowana + 1);
if (my_dog->owner == NULL)
{
free(my_dog->name);
free(my_dog);
return (NULL);
}
strcpy(my_dog->owner, owner);
return (my_dog);
}
