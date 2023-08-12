#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers in base 10,
 *              starting from 0 and followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;
while (digit < 10)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
