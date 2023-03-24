#include <stdio.h>
#include <math.h>
/**
 * main - Program that prints highest prime number
 * Return: 0 Sucess
 */
int main(void)
{
	long x;
	long max;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
	if (num % x == 0)
	{
	max = num / x;
	}
	}
	printf("%ld\n", max);
	return (0);
}
