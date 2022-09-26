#include "main.h"
/**
 * _strpbrk - find first matching char in string
 * @s: input string to search 
 * @accept: characters that could be match
 * Return: pointer to matching char
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	for (j = 0; accept[j] != '\0'; j++)
	if (s[i] == accept[j])
	goto exit;
	exit: return (s[i] != '\0' ? s + i : '\0');
}
