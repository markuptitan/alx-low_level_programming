#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers in base 10,
 *              starting from 0 and followed by a new line, using the putchar
 *              function and adhering to specific conditions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = 0; number < 10; number++)
{
putchar(number + '0');
}

putchar('\n');
return (0);
}
