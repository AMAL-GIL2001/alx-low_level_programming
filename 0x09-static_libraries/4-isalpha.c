#include "main.h"
#include<ctype.h>

/**
 * _isalpha - checks for alphabetic character.
 *
 * * @c: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)

		return (1);

	else
		return (0);

}
