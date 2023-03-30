#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Program that reverses the content of an array of integers.
 * @a: int pointer
 * @n: size of array
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int j = 0;

	for (i = n - 1; j < i; i--, j++)
	{
	tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
	}
}
