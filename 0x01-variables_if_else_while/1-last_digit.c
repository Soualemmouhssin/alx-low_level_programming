#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int nu;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nu = n % 10;
	if (nu > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, nu);
		return (0);
	}
	if (nu == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
		return (0);
	}
	if (nu < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nu);
		return (0);
	}

	return (0);
}

