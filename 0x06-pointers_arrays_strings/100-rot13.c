#include "main.h"
#include <stdio.h>
/**
 * *rot13 - Program that encodes string using rot13.
 * @s: char pointer
 * Return: Void
 */

char *rot13(char *s)
{
	int i,j;
	char x[] = "abcdefghijklmnopqrztuvwxyzABCDEFGGHIJKLOPQRSTUVWXYZ";
	char y[] = "nopqrstuvwxyzabcdefghiklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + 1); i++)
	{
	for (j = 0; j < 52; j++)
	{
	if (x[j] == *(s +i))
	{
	*(s + 1) = y[j];
	break;
	}
	}
	}
	return (s);
}
