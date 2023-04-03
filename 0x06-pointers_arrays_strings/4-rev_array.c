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
	int tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
