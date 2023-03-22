#include "main.h"
/**
 * main - Program that prints _putchar
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int a)
{
	int n;
	n = a % 10;
	if(n < 0)
	{
	n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
