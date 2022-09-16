#include "main.h"

/**
 * main - checks  character is a digit or not
 * Return: 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
	return (1);
	}

	return (0);
}
