#include "main.h"
#include <stdio.h>
/**
 * _memset - Program that fills memory with a constant byte
 * @s: char pointer
 * @b: char
 * @n: unsigned int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
