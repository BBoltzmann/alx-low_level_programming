#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
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
#endif
