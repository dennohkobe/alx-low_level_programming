nclude "main.h"
/**
 * * _strncpy - copy string from source to destination
 * * @dest: destination
 * * @src: source
 * * @n: bytes size
 * * Return: destination concatenated string
 * */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	dest[j] = src[j];
	for (; j < n; j++)
	dest[j] = '\0';
	return (dest);
}
