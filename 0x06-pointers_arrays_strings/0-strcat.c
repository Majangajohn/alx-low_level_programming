/*
 * FILE: 0-strcat.c
 * @Auth: Nyange
 *
 */
#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate strings
 * @dest: string 1
 * @src: string 2
 * Return: NULL if failure
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
