#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal values in a square array
 * @a: array of values
 * @size: size of array
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
int sum1, sum2, y;

sum1 = 0;
sum2 = 0;

for (y = 0; y < size; y++)
{
sum1 += a[(size + 1) * y];
sum2 += a[(size - 1) * (y + 1)];
}

printf("%d, %d\n", sum1, sum2);
}
