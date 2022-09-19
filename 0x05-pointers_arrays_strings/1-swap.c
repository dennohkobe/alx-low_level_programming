#include "main.h"

/**
 * main - swap int
 * return : 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}

