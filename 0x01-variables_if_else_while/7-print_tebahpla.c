#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char str[] = "zyxwvutsrqponmlkjihgfedcba\n";
	int i;

	for (i = 0; i <= 27; i++)
	{
		putchar(str[i]);
	}

	return (0);

}
