#include "main.h"
#include <string.h>
/**
 * _strcpy - copies a string to another buffer
 * @dest: destination buffer
 * @src: source buffer
 * Return: arrays of character
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
