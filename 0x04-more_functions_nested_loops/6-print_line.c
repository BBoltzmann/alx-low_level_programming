#include "main.h"
/**
 * print_line - Program that prints lines
 * @n: integer for line lenght
 * Return: x the miltiple of and b
 */

void print_line(int n)
{
	int y;

	if (n >= 1)
	{
	for (y = 0; y < n; y++)
	{
	_putchar (95);
	}
	_putchar (10);
	}
	else
	{
	_putchar (10);
	}
}
