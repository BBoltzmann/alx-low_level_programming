#include "main.h"
/**
 * print_last_digit - function that prints last digit of  int
 *@a: any int
 * Return: value of n (Success)
 */

int print_last_digit(int a)
{
	int n;

	n = a % 10;
	if (n < 0)
	{
	n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
