#include "main.h"
#include <stdio.h>
/**
 * _strncat - Program that prints elements in an array
 * @dest: destination value
 * @src: source value
 * @n: iyet
 * Return: Void
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i;

	while (*dest != '\0')
	{
	dest++;
	}

	for (i = 0; i < n && *src != '\0'; i++)
	{
	*dest++ = *src++;
	}
	*dest = '\0';
	return (result);
}
