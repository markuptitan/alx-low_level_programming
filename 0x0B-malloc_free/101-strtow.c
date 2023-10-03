#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int count = 0, in_word = 0, i = 0;
while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
{
in_word = 0;
}
else if (in_word == 0)
{
in_word = 1;
count++;
}
i++;
}
return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
char **words;
int i = 0, j = 0, k = 0, word_count = 0, word_len = 0;
if (str == NULL || *str == '\0')
return (NULL);
word_count = count_words(str);
if (word_count == 0)
return (NULL);
words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
return (NULL);
while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
{
if (word_len > 0)
{
words[j] = malloc(sizeof(char) * (word_len + 1));
if (words[j] == NULL)
{
while (j > 0)
free(words[--j]);
free(words);
return (NULL);
}
for (k = 0; k < word_len; k++)
words[j][k] = str[i - word_len + k];
words[j][k] = '\0';
j++;
word_len = 0;
}
}
else
{
word_len++;
}
i++;
}
words[j] = NULL; /* Set the last element to NULL to terminate the array */
return (words);
}
