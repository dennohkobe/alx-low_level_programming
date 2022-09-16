#include <stdio.h>
#include "main.h"

/**
 * main - print_numbers
 s Return: 0
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
