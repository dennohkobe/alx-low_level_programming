#include "main.h"
/**
 * _pow_recursion - x to power y
 * @x: Base
 * @y: Exponential
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (x >= 0 ? 1 : -1);
	if (y == 1)
	return (x);
	return (x * _pow_recursion(x, y - 1) * (x < 0 ? -1 : 1));
}
