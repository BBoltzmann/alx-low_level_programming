#include <stdio.h>
/**
 * main - function to print single digit number
 *
 * Return: Always 0 (Success)
 */

int main(void) {

int i; 
int j;
int k;
	for (i = 0; i <= 7; i++) {
        for (j = i + 1; j <= 8; j++) {
            for (k = j + 1; k <= 9; k++) {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');
                if (i < 7) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    return 0;
}
