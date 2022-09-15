#include <stdio.h>
/**
 * print_fib - prints the first 50 Fibonacci numbers,
 * Return: void
 */
void print_fib(int len)
{
	unsigned int target, i;
	unsigned int former_l, former_r,;
	unsigned int latter_l, latter_r;
	unsigned int fib_l, fib_r;

	f = 1;
	l = 2;
	target = len - 2;
	for (i = 0 ; i < target ; i++)
	{
	fib = f + l;
	printf("%d : ", i + 4);
	printf("%.0Lf" , fib);
	f = l;
	l = fib;
	if (i < target - 1)
	printf("\n");
	}
	putchar('\n');
}
/**
 * main - Start,
 * Return: Always 0 (Ok)
 */
int main(void)
{
	print_fib(98);
	return (0);
}
