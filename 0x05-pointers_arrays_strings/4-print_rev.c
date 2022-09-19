#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - prints a string in reverse order
 * Return: 0
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	putchar(*(s + len));
	putchar(10);
}
