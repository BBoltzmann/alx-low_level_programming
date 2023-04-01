#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: result buffer size
 * Return: address of r or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, carry_over = 0, sum =  0;

	while (n1[i] != '\0')
	i++;
	while (n2[j] != '\0')
	j++;
	if (i >= size_r || j >= size_r)
	{
	return (0);
	}
	r[size_r - 1] = '\0';

	for (i--, j--, k = size_r - 2; i >= 0 || j >= 0 || carry_over; i--, j--, k--)
	{
	sum = carry_over;
	if (i >= 0)
	sum += n1[i] - '0';
	if (j >= 0)
	sum += n2[j] - '0';
	if (sum > 9)
	{
	carry_over = 1;
	sum -= 10;
	}
	else
	{
	carry_over = 0;
	}
	r[k] = sum + '0';
	}
	if (k < 0)
	return (0);

	return (&r[k + 1]);
}
