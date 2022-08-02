#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - Printthe variables of struct dog
* @d: First argument (pointer to a structure);
* Return: NOTHING
*/

void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
{
d->name = "(nil)";
}
if (d->owner == NULL)
{
d->owner = "(nil)";
}
printf("Name: %s\n", d->name);
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
