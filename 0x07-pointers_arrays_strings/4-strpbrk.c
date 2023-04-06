#include "main.h"
#include <stdio.h>
/**
 * __strpbrk - Program that searches a string for any of a set of bytes.
 * @s: char pointer
 * @accept: char pointer
 * Return: int
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;

	while (*s)
	{
	for (; accept[a]; a++)
	{
	if (*s == accept[a])
	{
	return (s - 1);
	}
	s++;
	}
	}
	return (NULL);
}
