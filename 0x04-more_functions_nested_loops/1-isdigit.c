#include "main.h"
/**
 * _isdigit - check if charachter is uppercase
 * @c: The charachter to check
 *
 * Return: 1 if input is digit or 0 if not.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}

