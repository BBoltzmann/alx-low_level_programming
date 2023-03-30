#include "main.h"
#include <stdio.h>
/**
 * puts_half - Program that prints half of input string to stdout
 * @str: char with pointer
 * Return: void
 */

void puts_half(char *str)
{
	int x;
	int y = 0;
	int n;

	while (str[y] != '\0')
	{
	y++;
	}

	n = (y - 1) / 2;
	for (x = n + 1; x <= y - 1; x++)
	_putchar(str[x]);
	_putchar('\n');
}
