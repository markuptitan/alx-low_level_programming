#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: On success, a pointer to the concatenated string.
 *         On failure, NULL.
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
unsigned int len1 = 0, len2 = 0, i, j;
/* Check if s1 is NULL and set its length to 0 if so */
if (s1 == NULL)
s1 = "";
/* Check if s2 is NULL and set its length to 0 if so */
if (s2 == NULL)
s2 = "";
/* Calculate the lengths of s1 and s2 */
while (s1[len1])
len1++;
while (s2[len2])
len2++;
/* Allocate memory for the concatenated string */
concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
/* Check if malloc failed */
if (concat_str == NULL)
return (NULL);
/* Copy the contents of s1 to concat_str */
for (i = 0; i < len1; i++)
concat_str[i] = s1[i];
/* Copy the contents of s2 to concat_str */
for (j = 0; j <= len2; j++)
concat_str[i + j] = s2[j];
return (concat_str);
}
