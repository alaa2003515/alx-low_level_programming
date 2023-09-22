#include "dog.h"
#include <stdlib.h>

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
int one, lara, lowana;
dog_t *my_dog;

my_dog = malloc(sizeof(*my_dog));
if ((my_dog == NULL) || (!(name)) || (!(owner)))
{
free(my_dog);
return (NULL);
}

for (lara = 0; name[lara]; lara++)
;

for (lara = 0; owner[lowana]; lowana++)
;

my_dog->name = malloc(lara + 1);
my_dog->owner = malloc(lowana + 1);

if ((!(my_dog->name)) || (!(my_dog->owner)))
{
free(my_dog->owner);
free(my_dog->name);
free(my_dog);
return (NULL);
}
for (one = 0; one < lara; one++)
my_dog->name[one] = name[one];
my_dog->name[one] = '\0';

my_dog->age = age;

for (one = 0; one < lowana; one++)
my_dog->owner[one] = owner[one];
my_dog->owner[one] = '\0';

return (my_dog);
}
