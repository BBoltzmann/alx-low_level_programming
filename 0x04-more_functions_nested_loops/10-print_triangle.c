#include "main.h"
/**
 * print_triangle - Program that prints lines
 * @size: integer for line lenght
 * Return: x the miltiple of and b
 */

void print_triangle(int size)
{
	int z;
	int y;
	int x;

	if (size >= 1)
	{
	for (x = 0; x < size; x++)
	{
	for (y = size - x; y > 1; y--)
	{
	_putchar (32);
	}
	for (z = 0; z <= x; z++)
	{
	_putchar (35);
	}
	_putchar (10);
	}
	}
	else
	{
	_putchar (10);
	}
}
