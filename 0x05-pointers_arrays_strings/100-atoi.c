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

	for (i = 0; i < len; i++)
	{
		if(s[i] >= '0' && s[i] <= '9')
			num = s[i];
		else
	
			continue;
	}
	return (num);
}
