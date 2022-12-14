#include "main.h"
/**
 * factorial - returns factorial
 * @n: Number
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 1 || n == 0)
	return (1);
	return (n * factorial(n - 1));
}
