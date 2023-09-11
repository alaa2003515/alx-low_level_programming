
#ifndef DOG_H
#define DOG_H
/**
 *struct dog-Write a struct dog
 *@owner:owner of dog___________
 *@age:age of Doges________
 *@name:naMes of Doges_______________
 * Return: returns always (0) ______
 */
struct dog
{

char *name;
float age;
char *owner;

};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
