#include "main.h"
#include <stdio.h>
/**
 * _strstr - Program that locates a substring.
 * @needle: char pointer
 * @haystack: char pointer
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr, *needle_ptr;

	if (*needle == '\0')
	{
		return ((char *) haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			haystack_ptr = haystack;
			needle_ptr = needle;
			while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
			{
				haystack_ptr++;
				needle_ptr++;
			}
			if (*needle_ptr == '\0')
				return ((char *) haystack);
		}
	}
	return (NULL);
}
