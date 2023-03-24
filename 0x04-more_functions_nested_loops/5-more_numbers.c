#include "main.h"
/**
 * print_most_numbers - Program that identifies int 0-9
 * Return: x the miltiple of and b
 */

void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y <= 9; y++)
	{
	for (x = 0; x <= 14; x++)
	{
	if (x > 9)
	{
	_putchar ((x / 10) + '0');
	}
	_putchar ((x % 10) + '0');
	}
	_putchar ('\n');
	}
}
