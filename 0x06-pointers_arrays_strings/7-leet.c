#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the input string
 *
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
char leet_dict[] = "AEOTL";
char leet_nums[] = "43071";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_dict[j] != '\0'; j++)
{
if (str[i] == leet_dict[j] || str[i] == leet_dict[j] + ('a' - 'A'))
str[i] = leet_nums[j];
}
}
return (str);
}
