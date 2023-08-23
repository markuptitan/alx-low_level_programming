#include "main.h"

/**
 * string_toupper - Converts all lowercase letters to uppercase in a string
 * @str: Pointer to the input string
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - ('a' - 'A');
}
return (str);
}
