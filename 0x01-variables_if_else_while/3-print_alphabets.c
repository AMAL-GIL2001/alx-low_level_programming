#include<stdio.h>

/**
 * main -it  Prints the alphabet in lowercase and then uppercase.
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;
        char a;
        for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for(a = 'A'; a <= 'Z'; a++)
		putchar(a);

        putchar('\n');

        return (0);
}
