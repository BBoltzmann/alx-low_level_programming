#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Program that copies memory area
 * @dest: char pointer copy destintion
 * @src: char pointer copy source
 * @n: unsigned int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
