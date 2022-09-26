#include "main.h"
/**
 * _strchr - locates a character in string
 * @s: input string
 * @c: find character
 * Return: pointer to first c character find
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	if (s[i] == c)
	break;
	return (s[i] == c ? (s + i) : '\0');
}
