#include "main.h"
/**
 * _isdigit - Program that identifies int 0-9
 * @c: intger
 * Return: 1 if c is in int 0-9 and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
