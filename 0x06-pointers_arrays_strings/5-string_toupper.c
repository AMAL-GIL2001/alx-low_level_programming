#include "main.h"

/**
 * string_toupper - a function that make astring capital letter
 * @s: a string argument
 * Return: a string pointer
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
