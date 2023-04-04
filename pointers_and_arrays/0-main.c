#include <stdio.h>

/**
 * main - sizeof to determine the size of data types
 *
 * Return 0
 */
int main ()
{
	int a;
	char ch;
	int *p;
	a = 98;
	p = &a;

	printf("%lu  : is size of n\n", sizeof(a));
	printf("%lu  : is size of ch\n", sizeof(ch));
	printf("\n");
	printf("Address of variable 'ch': %p\n", &ch);
	printf("Address of variable 'a': %p\n", &a);
	printf("Address of variable 'p': %p\n", &p);
	printf("Size of pointer: %lu\n", sizeof(p));
	printf("Value of 'p': %p\n", p);
	printf("\n");
	printf("Value of 'a': %d\n", a);
	*p = 402;
	printf("Value of 'a': %d\n", a);
	return (0);
}
