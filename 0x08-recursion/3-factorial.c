#include "main.h"
#include <string.h>

/**
 * factorial - factorial recursively
 * @n: integer n whose factorial is required
 *
 * Return: factorial of n
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
