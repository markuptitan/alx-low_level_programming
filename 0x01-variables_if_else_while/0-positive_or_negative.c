#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random number and prints whether
 * the number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

/* Seed the random number generator */
srand(time(0));

/* Generate a random number for n */
n = rand() - RAND_MAX / 2;
/* Determine and print whether n is positive, negative, or zero */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}
