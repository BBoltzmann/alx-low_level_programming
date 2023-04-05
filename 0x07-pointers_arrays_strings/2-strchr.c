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
	while (*s != '\0')
	{
	if (c == *s)
	return (s);
	s++;
	}
	return (NULL);
}
