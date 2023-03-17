#include <stdio.h>
/**
 * main - function to hexadecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)

	{
	int h;

	for (h = 0; h < 10; h++)
	{
	putchar (h + '0');
	}
	for (h = 0; h < 6; h++)
	{
	putchar(h + 'a');
	}
	putchar ('\n');
	return (0);
	}
