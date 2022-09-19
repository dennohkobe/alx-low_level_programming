#include "main.h"

/**
 * main - swap int
 * @a : first int
 * @b : second int
 * return : 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}

