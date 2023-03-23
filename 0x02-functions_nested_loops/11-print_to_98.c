#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - function that prints to 98
 * @n: any int
 *
 * Return: no return
 */

void print_to_98(int n)
{
	sprintf(str, "%d", n);
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	_putchar (str[n]);
	_putchar (44);
	_putchar (10);
	break;
	}
	else
	{
	_putchar (n);
	_putchar (44);
	_putchar (32);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
        {
	_putchar (n + '0');
	_putchar (44);
	_putchar (10);
        break;
	}
	else
	{
	_putchar (n + '0');
	_putchar (44);
	}
	}
	}

}
