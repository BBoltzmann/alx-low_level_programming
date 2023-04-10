#include "main.h"
#include <stdio.h>
/**
 * _strspn - Program gets the length of a prefix substring
 * @s: char pointer
 * @accept: char pointer
 * Return: int
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 256; b++)
		{
			if (s[a] == accept[b])
			{
			putchar (s[a]);
			return (s);
			}
		}
		if (accept[a] == '\0')
		return (NULL);
	}
	return (NULL);
}
