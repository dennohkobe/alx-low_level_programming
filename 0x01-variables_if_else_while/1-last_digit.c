/**
 * 1-last_digit.c
 * Writter DGK
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Printing last digit of a randomly generated number
 * and if greater than 5, less than 6, or 0.
*/
/* Main */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n",
	n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n",
	n, n % 10);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n",
	n, n % 10);
	}
	/* return */
	return (0);
}
