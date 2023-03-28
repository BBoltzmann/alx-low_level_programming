#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * rev_string - Program that reverses input string without putchar
 * @s: char with pointer
 * Return: 1 if c is in int 0-9 and 0 otherwise
 */

void rev_string(char *s)
{
	char *begin = s;
	char *end = s + _strlen(s) - 1;

	while (begin < end)
	{
	char temp = *begin;
	*begin = *end;
	*end = temp;
	begin++;
	end--;
	}
}
