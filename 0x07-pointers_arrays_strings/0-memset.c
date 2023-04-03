#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset -  function that fills memory with a constant byte.
 * @s: a pointer string
 * @b: constant to fill
 * @n: number of bytes
 * Return: pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
