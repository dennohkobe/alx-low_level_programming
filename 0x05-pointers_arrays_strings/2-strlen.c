#include "main.h"

/**
 * Main - _strlen - return the lenth of the string as an int value.
 * Return: Int value of the lenth.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}

