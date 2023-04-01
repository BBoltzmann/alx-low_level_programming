#include "main.h"
#include <stdio.h>
/**
 * *rot13 - Program that encodes string using rot13.
 * @s: char pointer
 * Return: Void
 */

char *rot13(char *s)
{
	char *p = s;

	while (*p)
	{
	char c = *p;

	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
	{
	*p = c + 13;
	}
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
	{
	*p = c - 13;
	}
	p++;
	}
	return (s);
}
