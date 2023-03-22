#include "main.h"
/**
 * main - Program that prints _putchar
 *
 * Return: Always 0 (Success)
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
