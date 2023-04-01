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
	int i, j;
        int len1 = strlen (src);
	int len2 = strlen (dest);
        int len = len1 + len2;

	for (j = 0; j < len; j++)
	{
		for ( i = 0; i < len1; i++)
		{
			dest[j] = dest[i];
		}
		
		dest [j] = src [i];
	}
	return (dest);
}
