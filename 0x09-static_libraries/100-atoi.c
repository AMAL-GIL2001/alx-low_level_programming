#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s : string argument
 * Return: an integer 
 */
int _atoi(char *s)
{
	int i;
	int len = strlen(s);
	int num = 0;
	int count = 0;
	int digit;
	int d;

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			count++;
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			num = num * 10 + digit;
		}
	}
	if (count == 0)
		return (0);
	return (num);
}
