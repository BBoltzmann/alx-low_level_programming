#include "main.h"
#include <stdio.h>
/**
 * swap_int - Program that swaps the values of n = 2 int
 * @a: intger with pointer
 * @b: intger with pointer
 * Return: 1 if c is in int 0-9 and 0 otherwise
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
