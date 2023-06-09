#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - function that prints a buffer
 * @b: int
 * @size: buffer size
 * Return: address of r or 0
 */

void print_buffer(char *b, int size)
{
	int i, j;
	for (i = 0; i < size; i += 10)
	{
	printf ("%08x: ", i);
	for (j = 0; j < 10; j++)
	{
	if (i+j < size) 
	{
	printf("%02x ", b[i+j]);
	}
	else
	{
	printf("   ");
	}
	}
	printf(" ");
	for (j = 0; j < 10; j++)
	{
	if (i+j < size)
	{
	if (isprint(b[i+j]))
	{
	printf("%c", b[i+j]);
	}
	else
	{
	printf(".");
	}
	}
	printf("\n");
	}
	if (size <= 0)
	{
	printf("\n");
	}
	}
}
