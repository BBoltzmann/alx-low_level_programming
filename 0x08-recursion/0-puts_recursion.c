#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Program that prints a string to stdout
 * @s: char with pointer
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
