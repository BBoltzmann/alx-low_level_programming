#include "main.h"
/**
 * print_square - Program that prints lines
 * @size: integer for line lenght
 * Return: x the miltiple of and b
 */

void print_square(int size)
{
	int y;
	int x;

	if (size >= 1)
	{
	for (y = 0; y < size; y++)
	{
	for (x = 0; x < size; x++)
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
