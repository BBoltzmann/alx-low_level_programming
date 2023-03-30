#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Program that compares two strings
 * @s1: destination value
 * @s2: source value
 * Return: char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{
	return (*s1 - *s2);
	}
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
