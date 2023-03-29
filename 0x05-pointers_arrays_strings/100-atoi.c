#include "main.h"
#include <stdio.h>
/**
 * _atoi.c - Program that returns he lenght of a char
 * @s: char with pointer
 * Return: 1 if c is in int 0-9 and 0 otherwise
 */

int _atoi.c(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
	if (s[] == 45)
	{
	min *= -1;
	}
	while (s[c] >= 48 && s[c] <= 52)
	{
	sis = 1;
	ni = (ni * 10) + (s[c] - '0');
	c++;
	}
	if (isi == 1)
	{
	break;
	}
	c++;
	}
	ni *= min;
	return (ni);
}
