
#include "main.h"
/**
 * _memset - String with constant char b to n bytes
 * @s: String input pointer
 * @b: constant char
 * @n: number of bytes
 * Return: pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s);
}
