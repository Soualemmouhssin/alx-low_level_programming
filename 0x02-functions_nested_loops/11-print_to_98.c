#include "main.h"
/**
 * print_to_98 - get the absolut value of a number
 * @n: The intput number to check
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	for (int  i = n; i<= 98; i++)
	{
		if (i < 98)
		{
			printf("%d, ",i) ;
		}
		else {
			printf("%d\n", i) ;
		}
	}


	return ;
}
