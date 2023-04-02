#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings using n byte from source
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
			dest[len + i] = src[i];
	}
	return (dest);
}
