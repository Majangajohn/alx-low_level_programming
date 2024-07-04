/*
 * FILE: 2-strncpy.c
 * @Auth: Nyange
 */

#include "main.h"
#include <string.h>
/**
 * _strncpy - Copy a string starting from index 0 of `dest`.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: `dest` edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
