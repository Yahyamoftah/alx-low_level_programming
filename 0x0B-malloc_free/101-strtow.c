#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by malloc
 * @grid: Pointer to the grid
 * @height: Number of rows in the grid
 */
void free_grid(char **grid, unsigned int height)
{
	if (grid == NULL)
		return;

	for (unsigned int i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

/**
 * strtow - Splits a string into words
 * @str: String to split
 * Return: Pointer to a newly allocated array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	unsigned int num_words = 0;
	for (unsigned int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			num_words++;
	}

	if (num_words == 0)
		return (NULL);

	char **words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);

	unsigned int word_idx = 0;
	for (unsigned int i = 0; i < num_words; i++)
	{
		while (*str == ' ')
			str++;

		char *word_start = str;
		while (*str != ' ' && *str != '\0')
			str++;

		unsigned int word_len = str - word_start;
		char *word = malloc(sizeof(char) * (word_len + 1));
		if (word == NULL)
		{
			free_grid(words, i);
			return (NULL);
		}

		for (unsigned int j = 0; j < word_len; j++)
			word[j] = word_start[j];

		word[word_len] = '\0';
		words[word_idx++] = word;
	}

	words[num_words] = NULL;
	return (words);
}

