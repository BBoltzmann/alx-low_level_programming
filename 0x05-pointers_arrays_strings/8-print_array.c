#include "main.h"
#include <stdio.h>
/**
 * print_array - Program that prints elements in an array
 * @a: intger with pointer
 * @n: intger
 * Return: Void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
