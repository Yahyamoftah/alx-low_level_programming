#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int count_words(char *str);
int word_length(char *str);
void free_words(char **words);

/**
 * strtow - main
 * @str: str
 * Return: ptr
 */

char **strtow(char *str)
{
int i, j, k, len, words_count;
char **words;

if (str == NULL || *str == '\0')
return (NULL);

words_count = count_words(str);
if (words_count == 0)
return (NULL);

words = malloc((words_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

i = 0;
while (*str != '\0' && i < words_count)
{
while (*str == ' ')
str++;

len = word_length(str);

words[i] = malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
free_words(words);
return (NULL);
}

for (j = 0, k = 0; j < len; j++, k++)
words[i][j] = str[k];

words[i][j] = '\0';
i++;

str += len;
}

words[i] = NULL;

return (words);
}

/**
 * count_words - main
 * @str: str
 * Return: nom
 */
int count_words(char *str)
{
int count = 0;
int is_word = 0;

while (*str != '\0')
{
if (*str != ' ' && is_word == 0)
{
is_word = 1;
count++;
}
else if (*str == ' ')
{
is_word = 0;
}

str++;
}

return (count);
}

/**
 * word_length - main
 * @str: str
 * Return: len
 */

int word_length(char *str)
{
int len = 0;

while (str[len] != ' ' && str[len] != '\0')
len++;

return (len);
}

/**
 * free_words - main
 * @words: arry
 * Return: nope
 */
void free_words(char **words)
{
int i;

for (i = 0; words[i] != NULL; i++)
free(words[i]);

free(words);
}

