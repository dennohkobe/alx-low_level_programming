#include <stdio.h>
#include "main.h"

/**
 * print_line - print straight line
 * Return : 0 
 */

void print_line(int n)
{
	while (n-- > 0)
	{
	putchar('_');
	}
	putchar('\n');
}
