#include <stdio.h>
#include "main.h"

/**
 * print_square - printing lines diagonal
 * @size: input variable
 *
 * Return: void
 */

void print_square(int size)
{
	int j, i;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
