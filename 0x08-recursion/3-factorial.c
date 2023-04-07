#include "main.h"
#include <stdio.h>

/**
 * factorial - return the factorial of a number
 * @n: an input number
 * Return: the factorial of a number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
