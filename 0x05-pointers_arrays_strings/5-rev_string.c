#include "main.h"
#include <stdio.h>
/**
 * rev_string - Program that reverses input string without putchar
 * @s: char with pointer
 * Return: 1 if c is in int 0-9 and 0 otherwise
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char temp;

	/* loop to the end of string */
	while (s[index++] != '\0')
	len++;
	/* loop backward */
	for (index -= 1; index >= 0; index--)
	{
	temp = s[index];
	s[index] = s[len - index -1];
	s[len - index - 1] = temp;
	}
}
