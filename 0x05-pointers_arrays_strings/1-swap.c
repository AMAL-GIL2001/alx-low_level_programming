#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: first variable
 * @b: second variable
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;

}
