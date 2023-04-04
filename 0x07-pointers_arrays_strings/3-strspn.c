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
	unsigned int a = 0;
	unsigned int b = 0;

	for (; s[a] != '\0'; a++)
	{
	for (; accept[b] != '\0'; b++)
	{
	if (s[a] == accept[b])
	{
	break;
	}
	}
	if (s[a] == '\0')
	{
	return (b + 1);
	}
	}
	return (b + 1);
}
