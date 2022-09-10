#include <stdio.h>

/**
 * main printing the alphabet in lowercase, except for q and e.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}
	putchar('\n');
	/* return desc */
	return (0);
}
