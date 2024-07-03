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
	return (strcat(dest,src));
}
