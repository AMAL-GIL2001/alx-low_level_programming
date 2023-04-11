#include "main.h"
#include<stdio.h>
#include <ctype.h>
/**
 *  _islower -  checks for lowercase character.
 *
 * @c: The character to be checked.
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (islower(c) != 0)

		return  (1);

	else

		return (0);
}
