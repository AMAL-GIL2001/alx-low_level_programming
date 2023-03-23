#include "main.h"
#include<stdio.h>

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * a = row, b = column, res = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int a, b, res;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 1; b <= 9; b++)
		{
			res = (a * b);
			if ((res / 10) > 0)
			{
				_putchar((res / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((res % 10) + '0');

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
