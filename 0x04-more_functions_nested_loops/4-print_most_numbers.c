#include "main.h"
/**
 * print_most_numbers - Program that identifies int 0-9
 * Return: x the miltiple of and b
 */

void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
	if (x != 50 && x != 52)
	{
	_putchar (x);
	}
	}
	_putchar (10);
}
