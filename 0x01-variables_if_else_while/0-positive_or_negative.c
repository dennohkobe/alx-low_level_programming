/**
*Positive or negative
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*Random numbers
*/

int main(void)
{
	int x;

	srand(time(0));
	x = rand() - Max_Random / 2;

	if (x > 0)
	printf("%d is positive\n", x);

	else if (x < 0)
	printf("%d is negative\n", x);

	else
	printf("%d is zero\n", x);

	return (0);
}
