#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * check_palindrome - check if s is palindrome.
 * @s: string base address.
 * @start: left index.
 * @end: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - Program that returns 1 if a string is a palindrome.
 * @s: char pointer
 * Return: int
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
	{
		return (0);
	}
	return (check_palindrome(s, 0, len - 1));
}
