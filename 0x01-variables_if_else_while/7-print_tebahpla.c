#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char str[] = "zyxwvutsrqponmlkjihgfedbca\n";
	int i;

	for (i = 0; i <= 28; i++)
	{
		putchar(str[i]);
	}

	return (0);

}