#include <stdio.h>
/**
 * main - Start
 * @a: number args
 * @b: pointer args
 * Return: Always 0 (Success)
 */
int main(int a, char **b)
{
	(void)a;
	printf("%s\n", *b);
	return (0);
}
