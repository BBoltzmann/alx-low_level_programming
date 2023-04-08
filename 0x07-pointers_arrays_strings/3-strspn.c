#include "main.h"
#include <stdio.h>
/**
 * _strspn - Program gets the length of a prefix substring
 * @s: char pointer
 * @accept: char pointer
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;
	unsigned int c = 0;

	for (a = 0; s[a] != '\0' && s[a] != 32; a++)
	{	
		for (b = 0; b < 256 && accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
			c++;
			}
		}
		if (accept[a] == '\0')
		return (c);
	}
	return (c);
}
