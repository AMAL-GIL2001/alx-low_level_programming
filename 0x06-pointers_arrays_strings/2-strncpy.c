#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that copies astring
 * @dest: destination string
 * @src: source string
 * @n : number of characters to copy
 * Return: pointer to the resulting string des
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
			dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
