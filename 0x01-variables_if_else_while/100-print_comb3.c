#include <stdio.h>
/**
 * main - function to print single digit number
 *
 * Return: Always 0 (Success)
 */

int main(void)

	{
	int a;
	int b;
	for (a = 0; a < 10; a++)
	{
	for (b = 0; b < 10; b++)
	{
		if (a != b)
		{
		putchar (a + '0');
		putchar (b + '0');
		putchar (',');
		putchar (' ');
		}
	}
	}
	putchar ('\n');
	return (0);
	}
