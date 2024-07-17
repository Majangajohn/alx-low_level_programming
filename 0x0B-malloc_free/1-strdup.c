/*
 * FILE: 1-strdup.c
 * @Auth: Nyange
 */


#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);

	i = strlen(str);

	a = malloc((i +1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
