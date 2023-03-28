#include "main.h"
#include <stdio.h>
/**
 * _puts - Program that prints a string to stdout
 * @str: char with pointer
 * Return: void
 */

void _puts(char *str)
{
	/* Str are one-dimensional array of char terminated by a null character '\0'*/
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
