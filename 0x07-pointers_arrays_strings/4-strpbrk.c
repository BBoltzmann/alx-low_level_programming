#include "main.h"
#include <stdio.h>
#include "2-strchr.c"
/**
 * _strpbrk - Program that searches a string for any of a set of bytes.
 * @s: char pointer
 * @accept: char pointer
 * Return: int
 */
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr, *accept_ptr;

	for (s_ptr = s; *s_ptr != '\0'; s_ptr++)
	{
		for (accept_ptr = accept; *accept_ptr != '\0'; accept_ptr++)
		{
			if (*s_ptr == *accept_ptr)
				return ((char *) s_ptr);
		}
	}
	return (NULL);
}
