#include <stdio.h>

/**
 * main printing the lowercase alphabet in r
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');
	/* return */
	return (0);
}
