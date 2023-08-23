#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes from src to concatenate
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
int dest_len = 0;
while (*ptr != '\0')
{
ptr++;
dest_len++;
}
while (*src != '\0' && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}
if (n == 0)
*ptr = '\0';
return (dest);
}
