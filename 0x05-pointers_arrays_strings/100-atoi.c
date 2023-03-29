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
	int num;
	int count = 0;
	int digit;

	for (i = 0; i < len; i++)
	{
		if(s[i] == '-')
			digit++;
		if(s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - 48;
			if (digit %2 == 0)
				digit = -digit;
			num = num * 10 + digit;
                        count++;  
		}
		else
	
			continue;
	}
	if (count == 0)
		return (0);
	
	return (num);
}
