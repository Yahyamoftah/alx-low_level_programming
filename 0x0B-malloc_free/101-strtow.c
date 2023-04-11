#include "main.h"

/**
 * strtow - Func that Split string into words
 * @str: The string
 *
 * Return: The Pointer
 */
char **strtow(char *str)
{
    char **words_arr;
    int i, j = 0, temp = 0, word_len = 0, num_words = count_words(str);

    if (num_words == 0)
        return (NULL);

    words_arr = (char **) malloc(sizeof(char *) * (num_words + 1));

    if (words_arr != NULL)
    {
        for (i = 0; i <= str_len(str) && num_words; i++)
        {
            if ((str[i] != ' ') && (str[i] != '\0'))
                word_len++;
            else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
            {
                words_arr[j] = (char *) malloc(sizeof(char) * word_len + 1);

                if (words_arr[j] != NULL)
                {
                    while (temp < word_len)
                    {
                        words_arr[j][temp] = str[(i - word_len) + temp];
                        temp++;
                    }
                    words_arr[j][temp] = '\0';
                    word_len = temp = 0;
                    j++;
                }
                else
                {
                    while (j-- >= 0)
                        free(words_arr[j]);
                    free(words_arr);
                    return (NULL);
                }
            }
        }
        words_arr[num_words] = NULL;
        return (words_arr);
    }
    else
        return (NULL);
}

/**
 * count_words - number of words in str
 * @str: The string
 *
 * Return: Nu the words
 */
int count_words(char *str)
{
    int i = 0, num_words = 0;

    while (i <= str_len(str))
    {
        if ((str[i] != ' ') && (str[i] != '\0'))
            i++;
        else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
        {
            num_words += 1;
            i++;
        }
        else
            i++;
    }
    return (num_words);
}

/**
 * str_len - Length str
 * @str: The string
 *
 * Return: Length string
 */
int str_len(char *str)
{
    int len = 0;

    if (str != NULL)
    {
        while (str[len])
            len++;
    }
    return (len);
}

