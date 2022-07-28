#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
* @b: integer
* Return: pointer to allocated memory
* else if malloc fails return 98
*/
void *malloc_checked(unsigned int b)
{
void *str;

str = malloc(b);
if (str == NULL)
exit(98);
return (str);
}
