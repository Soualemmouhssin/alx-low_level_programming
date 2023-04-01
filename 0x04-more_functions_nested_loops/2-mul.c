#include "main.h"
/**
 * mul - multiplay two numbers
 * @a: number1
 * @b: number2
 *
 * Return: a * b
 * On error, -1 is returned, and errno is set appropriately.
 */
int mul(int a, int b)
{
	long int A = (long int) a;
	long int B = (long int) b;

	return (A * B);
}

