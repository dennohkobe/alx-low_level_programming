#include "main.h"

/**
 * Main - checks character is uppercase or not
 * Return: 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
