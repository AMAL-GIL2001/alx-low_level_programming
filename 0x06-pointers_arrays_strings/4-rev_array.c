#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * reverse_array - it reverse the content of an array
 * @a: an array
 * @n: number of elemnts of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf("%d ,", a[i]);
	}
	printf("\n");
}
