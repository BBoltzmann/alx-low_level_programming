#include "main.h"
#include <stdio.h>
/**
 * test_prime - Program that returns prime number, otherwise return 0
 * @n: int
 * @i: int equal 1
 * Return: int
 */
int test_prime(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (test_prime(n, i + 1));
}

/**
 * is_prime_number - Program that returns prime number, otherwise return 0
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	return (test_prime(n, 1));
}
