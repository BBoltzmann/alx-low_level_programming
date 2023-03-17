#include <stdio.h>
/**
 * main - function to print single digit number
 *
 * Return: Always 0 (Success)
 */

int main(void)

	{
	int a;

	for (a = 0; a <= 9; a++)
	{
	putchar (a + '0');
	putchar (',');
	putchar (' ');
	}
	putchar ('\n');
	return (0);
	}
