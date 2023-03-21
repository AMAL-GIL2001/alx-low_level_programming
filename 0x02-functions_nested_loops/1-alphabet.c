#include <stdio.h>
#include "main.h"
/**
  * print_alphabet - Make the alphabet
  *
  * main:  calls the function *
  */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
}

int main(void)
{
	print_alphabet();

	return (0);
}
