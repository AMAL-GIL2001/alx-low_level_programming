#include "main.h"
#include<string.h>

/**
 * puts_half - prints half of a string
 * @str: string argument
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str) - 1;
	int n = len / 2;

	for (i = n + 1; i <= len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');

}
