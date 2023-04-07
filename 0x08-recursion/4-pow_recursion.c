#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - return the pow of x raised by y
 * @x: the first value
 * @y: a second value
 * Return: the pow value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
