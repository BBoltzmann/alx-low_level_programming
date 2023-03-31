#include "main.h"
#include <stdio.h>
/**
 * *cap_string - Program that capitalizes all words of a string
 * @s: char pointer
 * Return: Void
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
	while (!(s[i] >= 'a' && s[i] <= 'z'))
	i++;
	if (s[i - 1] == ' ' ||
	s[i - 1] == '\t' ||
	s[i - 1] == '\n' ||
	s[i - 1] == ',' ||
	s[i - 1] == ';' ||
	s[i - 1] == '.' ||
	s[i - 1] == '!' ||
	s[i - 1] == '?' ||
	s[i - 1] == '"' ||
	s[i - 1] == '(' ||
	s[i - 1] == ')' ||
	s[i - 1] == '{' ||
	s[i - 1] == '}' ||
	i == 0)
	s[i] -= 32;
	i++;
	}
	return (s);
}
