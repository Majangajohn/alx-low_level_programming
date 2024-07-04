/*
 * FILE: 1-strncat.c
 * @Auth: Nyange
 */

#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
