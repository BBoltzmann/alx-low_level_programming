#include "main.h"
/**
 * print_diagonal - Program that prints lines
 * @n: integer for line lenght
 * Return: x the miltiple of and b
 */

void print_diagonal(int n)
{
	int y;
	int x;

	if (n >= 1)
	{
	for (y = 0; y < n; y++)
	{
	for (x = 0; x < y; x++)
	{
	_putchar (32);
	}
	_putchar (92);
	_putchar (10);
	}
	}
	else
	{
	_putchar (10);
	}
}
