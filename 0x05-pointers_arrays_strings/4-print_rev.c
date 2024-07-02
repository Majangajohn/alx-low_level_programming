/*
 * FILE: 4-print_rev.c
 * @Auth: Nyange
 *
 */

#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int j, len;

	len = strlen(s);

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
