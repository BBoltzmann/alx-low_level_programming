#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Program that returns prime number, otherwise return 0
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	int i = 3;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	for (; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
