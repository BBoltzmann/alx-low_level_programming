#include "main.h"
/**
 * _abs - function returns abs value of int
 *@n: any int
 * Return: value of n (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
	int a;

	a = n * -1;
	return (a);
	}
	return (n);
}
