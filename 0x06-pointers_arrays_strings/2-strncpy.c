#include "main.h"
#include <stdio.h>
/**
 * _strncat - Program that prints elements in an array
 * @dest: destination value
 * @src: source value
 * @n: size of src
 * Return: Void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for ( ; i < n; i++)
	dest[i] = '\0';

	return dest; 
}
