#include "main.h"
#include <stdio.h>
/**
 * print_rev - Program that reverses input string to output
 * @s: char with pointer
 * Return: 1 if c is in int 0-9 and 0 otherwise
 */

void print_rev(char *s)
{
	int c = 0;

	/* loop to the end of string */
	while (s[c] != '\0')
	c++;
	/* loop backward */
	for (c -= 1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
