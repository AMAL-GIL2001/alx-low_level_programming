#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenate two strings 
 * @dest: destination string
 * @src: source string
 * Return: a pointers to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len = strlen(dest);

	for (i = 0; src[i] != '0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '0';

	return (dest);

}
