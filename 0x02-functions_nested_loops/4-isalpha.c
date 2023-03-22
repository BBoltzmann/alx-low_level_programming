#include "main.h"
/**
 * main - Program that prints _putchar
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{

        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
        return (1);
        }
        return (0);
}
