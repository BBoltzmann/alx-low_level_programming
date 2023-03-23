#include "main.h"
/**
 * print_alphabet - Program that prints alphabets
 * Description: functions prins alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar (ch);
}
_putchar ('\n');
return;
}
