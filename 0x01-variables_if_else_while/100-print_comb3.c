#include <stdio.h>
/**
 * main - function to print single digit number
 *
 * Return: Always 0 (Success)
 */

int main(void)

	{
	int a,b;

	for (a = 0; a <= 8; a++)
	{
	for (a = b + 1; b <= 9; b++)
	{
	putchar (a + '0');
	putchar (b + '0');
	if (a < 8 || b < 9)
	{
	putchar (',');
	putchar (' ');
	}
	}
	}
	putchar ('\n');
	return (0);
	}
