#include "main.h"
#include "stdio.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string
 * @accept: a substring to calculate its length
 * Return: number of byte (lenght)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

