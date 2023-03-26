#include "main.h"

/**
 * print_most_numbers - it prints the most numbers
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '4' || c == '2')
		{
			continue;
		}
		else
			_putchar(c);
	}
	_putchar('\n');
}
