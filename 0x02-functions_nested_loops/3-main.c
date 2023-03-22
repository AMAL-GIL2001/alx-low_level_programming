#include "main.h"

/**
 * main - check the code.
 *
 *Argument c: an ascci code of the characte
 *
 * Return: Always 0 if not lowercase and 1 if lowercase
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
