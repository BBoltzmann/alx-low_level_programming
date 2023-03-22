#include "main.h"
/**
 * main - Program that prints alphabeth
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char ch;
int i = 0;
	while ( i < 10)
	{
        for (ch = 'a'; ch <= 'z'; ch++)
        {
        _putchar (ch);
        }
        _putchar ('\n');
	i++;
	}
        return;
}
