#include <stdio.h>
/**
 * main - function to print single digit number
 *
 * Return: Always 0 (Success)
 */
int main() {
    for (int i = 0; i <= 99; i++) {
        for (int j = i; j <= 99; j++) {
            int tens_i = i / 10;
            int ones_i = i % 10;
            int tens_j = j / 10;
            int ones_j = j % 10;
            
            // check if the two numbers are the same
            if (i == j) {
                continue;
            }
            
            // print the numbers in ascending order
            if (tens_i < tens_j || (tens_i == tens_j && ones_i < ones_j)) {
                putchar(tens_i + '0');
                putchar(ones_i + '0');
                putchar(' ');
                putchar(tens_j + '0');
                putchar(ones_j + '0');
                putchar(',');
                putchar(' ');
            }
        }
    }
    
    return 0;
}

