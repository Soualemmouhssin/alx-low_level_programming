#include "main.h"
/**
 * more_numbers - print numbers from 0 14
 *
 * Return: void.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{

	int i;
	int k;
	int l;
	int j;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				l = 1;
				j++;
			}
			else
			{
				j = -1;
				l = i;
			}

			_putchar(l + '0');
			if (j > -1)
				_putchar(j + '0');
		}
		_putchar('\n');
	}

}

