#include "main.h"
#include <stdio.h>
/**
 * find_sqrt - helper function to recursively find square root
 * @n: integer to find the square root of
 * @i: integer eqauls 1
 * Return: integer square root of n within search interval, or -1 if not found
 */
int find_sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	if (sq == n)
		return (i);
	return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Program that returns the natural square root of a number
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 1));
}
