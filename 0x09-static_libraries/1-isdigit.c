#include"main.h"
/**
 * _isdigit - a function that cheks if a a character is digit or nor
 * @c :character argument
 *
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
