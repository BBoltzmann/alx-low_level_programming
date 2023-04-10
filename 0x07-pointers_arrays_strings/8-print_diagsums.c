#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix
 * @a: char pointer
 * @size: int length of square
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += *(a + (x * size) + x);
		sum2 += *(a + x * size + size - 1 - x);
	}
	printf("%i, %i\n", sum1, sum2);
}
