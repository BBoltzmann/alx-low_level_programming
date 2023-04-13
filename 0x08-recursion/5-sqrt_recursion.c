#include "main.h"
#include <stdio.h>
/**
 * find_sqrt - helper function to recursively find square root
 * @n: integer to find the square root of
 * @left: left bound of search interval
 * @right: right bound of search interval
 * Return: integer square root of n within search interval, or -1 if not found
 */
int find_sqrt(int n, int left, int right)
{
	int mid = (left + right) / 2;
	int mid_sq = mid * mid;

	if (left > right)
		return (-1);
	else if (mid_sq == n)
		return (mid);
	else if (mid_sq < n)
		return (find_sqrt(n, mid + 1, right));
	else
		return (find_sqrt(n, left, mid - 1));
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
	return (find_sqrt(n, 0, n));
}
