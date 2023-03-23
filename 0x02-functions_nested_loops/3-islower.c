#include "main.h"
/**
 * _islower - function that identiifies lower case alphabeth
 *@c: is a int value of ASCII
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
