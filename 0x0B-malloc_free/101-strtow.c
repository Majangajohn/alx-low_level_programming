/*
 * FILE: 101-strtow.c
 * @Auth: Nyange
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * strtow - concatenates arguments.
 * @str: String to be splitted.
 *
 * Return: a pointer to array of String.
 */

char **strtow(char *str)
{
	char *piece, **str_arr = NULL, *str_cpy = NULL;
	int i = 0, *number_of_words;

	if (str == NULL)
	{
		return (NULL);
	}

	number_of_words = strlen(str);
	str_cpy = strdup (str);
	piece = strtok(str_cpy, " ");
    while (piece != NULL)
    {
        if ((*piece) == '\n')
        {
            piece = strtok(NULL, " ");
            continue;
        }
        (*number_of_words)++;
        piece = strtok(NULL, " ");
    }

    str_arr = (char **)malloc(sizeof(char *) * (*number_of_words));
    piece = strtok(str, " ");
    for (i = 0; piece != NULL; i++)
    {
        if ((*piece) == '\n')
        {
            piece = strtok(NULL, " ");
            continue;
        }
        str_arr[i] = (char *)malloc(sizeof(char) * (strlen(piece) + 1));
        strcpy(str_arr[i], piece);
        piece = strtok(NULL, " ");
    }

    if (str_cpy)
        free (str_cpy);

    return (str_arr);
}
