#include "main.h"
#include <stdio.h>
/**
 * puts2 - Program that prints a string to stdout
 * @str: char with pointer
 * Return: void
 */

void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
	y++;
	}

	for (x = 0; x < y; x += 2)
	_putchar(str[x]);
	_putchar('\n');
}
