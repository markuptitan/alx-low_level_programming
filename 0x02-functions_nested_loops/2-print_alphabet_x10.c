/**
 * print_alphabet_x10 - Entry point for function
 *
 *
*/

#include "main.h"

void print_alphabet_x10(void)
{
int i, j;
char letter = 'a';
for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
_putchar(letter);
letter++;
}
_putchar('\n');
letter = 'a';
}
}
