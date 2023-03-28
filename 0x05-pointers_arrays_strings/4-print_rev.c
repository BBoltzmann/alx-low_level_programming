#include "main.h"
#include <stdio.h>
/**
 * _strlen - Program that returns he lenght of a char
 * @s: char with pointer
 * Return: 1 if c is in int 0-9 and 0 otherwise
 */

int _strlen(char *s)
{
	int c = 0;

	/* (*s++) move to the end of s value location */
	while (*s++)
	c++;
	return (c);
}
