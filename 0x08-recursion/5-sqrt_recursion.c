#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Program that returns the natural square root of a number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	for (; i < n / 2; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
		if (i * i > n)
		{
			break;
		}
	}
	return (-1);
}
