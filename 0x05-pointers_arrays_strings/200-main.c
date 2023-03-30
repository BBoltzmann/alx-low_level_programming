#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];
	/*int *p;*/
	/*int *p2;*/

	*a = 98;
	printf("Value of *a: %d\n", *a);
	printf("Address of 'a[0]': %p\n", &(a[0]));
	*(a + 1) = 198;
	printf("Value of *(a + 1): %d\n", *(a + 1));
	printf("Address of 'a[1]': %p\n", &(a[1]));
	*(a + 2) = 298;
	a[3] = 398;
	printf("Value of a[3]: %d\n", a[3]);
	printf("Value of *(a + 3): %d\n", *(a + 3));
	*(a + 4) = 498;
	return (0);
}
