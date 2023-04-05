#include "main.h"
#include <stdio.h>
/**
 * _strchr - Program that locates a character in a string
 * @s: char pointer
 * @c: char to be located
 * Return: dest
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (c == s[i])
	return (s + i);
	}
	if (c == '\0')
	return (NULL);
}
