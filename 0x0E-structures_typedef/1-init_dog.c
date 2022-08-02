#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - Initialize a variable type struct dog
* @d: First argument (pointer to a structure);
* @name: Second argument (name of the dog)
* @age: Third argument (age of the dog)
* @owner: Fourth argument (owner of the dog)
* Return: NOTHING
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
