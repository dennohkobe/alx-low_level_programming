#include "main.h"
/**
 * is_prime_number - check number is prime
 * @a: Number
 * @b: Divider
 * Return: Boolean
 */
int is_prime(int a, int b)
{
	if (a < 2)
	return (0);
	if (b * b > a)
	return (1);
	return (a % b == 0 ? 0 : (is_prime(a, b + 1)));
}
/**
 * is_prime_number - check no. if prime
 * @n: Number
 * Return: Boolean
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
