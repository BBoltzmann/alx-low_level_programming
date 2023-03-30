#include "main.h"
#include <stdio.h>
/**
 * _strcat - Program that prints elements in an array
 * @dest: destination value
 * @src: source value
 * Return: Void
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0')
	{
	*dest++ = *src++;
	}
	*dest = '\0';
	return (result);
}
