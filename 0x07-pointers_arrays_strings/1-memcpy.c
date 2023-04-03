#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory
 * @dest : destination memory
 * @src: source memory
 * @n: number of integers to copy
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
