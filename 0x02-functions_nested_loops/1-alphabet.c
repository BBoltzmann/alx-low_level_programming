#include <stdio.h>
#include "main.h"
/**
 * main - Program that prints _putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
        putchar (ch);
        }
        putchar ('\n');
        return;
}
