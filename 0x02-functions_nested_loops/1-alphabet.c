/**
*print_alphabet - Entry point for printing the alphabet
*@ch:
*/
#include "main.h"

void print_alphabet(void)
{
char ch;

/* Print the lowercase alphabet, one character at a time. */
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}

/* Print a newline character. */
_putchar('\n');
}
