#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: string argument
 * Return: nothing
 */

void rev_string(char *s)
{
	char tmp;
	int start = 0;
	int end = strlen(s) - 1;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;

		start++;
		end--;
	}
}
