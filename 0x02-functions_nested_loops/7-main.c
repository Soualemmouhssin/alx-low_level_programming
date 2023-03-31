#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	int n;

	printf("%d\n", INT_MIN);
	n = INT_MIN;
	n = (-1 * n);
	r = print_last_digit(n);
	printf("--> %ld\n",sizeof(INT_MIN));
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
