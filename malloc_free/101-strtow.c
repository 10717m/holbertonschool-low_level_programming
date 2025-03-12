#include "main.h"
#include <stdlib.h>

/**
* count_words - Counts the number of words in a string.
* @str: The string to count words in.
*
* Return: The number of words.
*/
int count_words(char *str)
{
int i, count = 0, in_word = 0;

for (i = 0; str[i]; i++)
{
if (str[i] != ' ')
{
if (!in_word)
{
count++;
in_word = 1;
}
}
else
{
in_word = 0;
}
}

return (count);
}

/**
* get_word_length - Gets the length of a word starting at a given index.
* @str: The string to search.
* @start: The starting index of the word.
*
* Return: The length of the word.
*/
int get_word_length(char *str, int start)
{
int len = 0;

while (str[start + len] != ' ' && str[start + len] != '\0')
len++;

return (len);
}

/**
* strtow - Splits a string into words.
* @str: The string to split.
*
* Return: A pointer to an array of strings (words), or NULL if it fails.
*/
char **strtow(char *str)
{
char **words;
int i, j, k, len, word_count;

if (str == NULL || *str == '\0')
return (NULL);

word_count = count_words(str);
if (word_count == 0)
return (NULL);

words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
return (NULL);

for (i = 0, k = 0; i < word_count; i++)
{
while (str[k] == ' ')
k++;

len = get_word_length(str, k);

words[i] = malloc(sizeof(char) * (len + 1));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}

for (j = 0; j < len; j++)
words[i][j] = str[k + j];
words[i][j] = '\0';

k += len;
}

words[i] = NULL;

return (words);
}
