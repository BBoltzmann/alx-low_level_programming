#include "main.h"
#include <stdio.h>
/**
 * *leet - Program that encodes a string into 1337
 * @s: char pointer
 * Return: Void
 */

char *leet(char *s)
{
	char *p, *ptr;
	char *leet_table = "4433007711";

	for (ptr = s; *ptr; ptr++)
	{
	for (p = "aAeEoOtTlL"; *p; p++)
	{
	if (*ptr == *p)
	{
	*ptr = leet_table[p - "aAeEoOtTlL"];
	break;
	}
	}
	}
	return (s);
}
