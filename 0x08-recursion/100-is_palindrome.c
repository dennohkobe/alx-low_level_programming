nclude "main.h"
/**
 * str_length - String length
 * @st: input string
 * Return: integer length
 */
int str_length(char *st)
{
	if (*st == '\0')
	return (0);
	return (str_length(++st) + 1);
}
/**
 * check_letter - check numbers are equal
 * @str: input 
 * @a: start
 * @z: end
 * Return: boolean
 */
int check_letter(char *str, int a, int z)
{
	if ((z - a) < 2)
	return (str[a] == str[z] ? 1 : 0);
	if (str[a] != str[z])
	return (0);
	return (check_letters(str, ++a, --z));
}
/**
 * is_palindrome - checks palindrome
 * @s: input string
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int len = str_length(s);

	if (len < 2)
	return (1);
	return (check_letter(s, 0, --len));
}
