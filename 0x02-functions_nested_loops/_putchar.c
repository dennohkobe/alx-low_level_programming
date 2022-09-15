#include <unistd.h>

/**
 * main - _putchar print C character
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
