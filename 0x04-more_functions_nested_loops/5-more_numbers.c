#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: nothing
 */

void more_numbers(void)
{       
        int c;
        int a;
        
        for (c = 0; c <= 9; c++)
        {       
                for (a = 0; a <= 14; a++)
                {       
			if (a > 9)
				_putchar(a / 10 + '0');
                        _putchar(a % 10 + '0');
                }
		_putchar('\n');
	}
}

