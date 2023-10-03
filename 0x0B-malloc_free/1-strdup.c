#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: The string to duplicate
 *
 * Return: On success, a pointer to the duplicated string.
 *         On failure, NULL.
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int i, len = 0;
/* Check if str is NULL */
if (str == NULL)
return (NULL);
/* Calculate the length of str */
while (str[len])
len++;
/* Allocate memory for the duplicate string */
dup_str = malloc(sizeof(char) * (len + 1));
/* Check if malloc failed */
if (dup_str == NULL)
return (NULL);
/* Copy the contents of str to dup_str */
for (i = 0; i <= len; i++)
dup_str[i] = str[i];
return (dup_str);
}
