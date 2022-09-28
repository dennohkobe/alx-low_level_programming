#include "main.h"
/**
 * check_divisor - get square root
 * @a: main number
 * @b: check if is a square root
 * Return: natural sqrt or -1
 */
int check_natural(int a, int b)
{
	if (b * b == a)
	return (b);
	if (b * b > a)
	return (-1);
	return (check_natural(a, b + 1));
}
/**
 * _sqrt_recursion - input
 * @n: no. for natural square root
 * Return: natural sqrt or -1
 */
int _sqrt_recursion(int n)
{
	if (n > 1 && n < 4)
	return (-1);
	return (check_natural(n, 1));
}
