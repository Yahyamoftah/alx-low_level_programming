#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - The main one
 * @grid: an input
 * @height: an input
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - Th main one
 * @str: an input
 * Return: 0
 */
char **strtow(char *str)
{
	char **hope;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	aout = malloc((height + 1) * sizeof(char *));
	if (hope == NULL || height == 0)
	{
		free(hope);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				hope[i] = malloc((c - a1 + 2) * sizeof(char));
				if (hope[i] == NULL)
				{
					ch_free_grid(hope, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			hope[i][j] = str[a1];
		hope[i][j] = '\0';
	}
	hope[i] = NULL;
	return (hope);
}
