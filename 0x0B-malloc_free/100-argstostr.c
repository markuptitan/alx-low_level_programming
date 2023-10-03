#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: Array of argument strings
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0, total_len = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
total_len += len + 1; /* Add 1 for the newline character */
len = 0;
}
str = malloc(sizeof(char) * (total_len + 1)); /* Add 1 for null terminator */
if (str == NULL)
return (NULL);
total_len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[total_len++] = av[i][j];
}
str[total_len++] = '\n';
}
str[total_len] = '\0';
return (str);
}
