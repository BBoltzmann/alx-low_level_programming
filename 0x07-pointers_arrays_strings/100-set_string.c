#include "main.h"
#include <stdio.h>
/**
 * set_string - Program that sets the value of a pointer to a char.
 * @s: char pointer to pointer
 * @to: char pointer
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
