#include "main.h"
/**
 * _strcmp - check 2 strings if equal value
 * @s1: destination
 * @s2: source string
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j] != '\0' && s2[j] != '\0'; j++)
	if (s1[j] != s2[j])
	return (s1[j] - s2[j]);
	return (0);
}
