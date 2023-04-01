#include "main.h"
/**
 * print_line - print numbers from 0 9
 * @n: lenght of line
 * Return: void.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

