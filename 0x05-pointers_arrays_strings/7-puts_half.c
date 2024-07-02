/*
 * FILE : 7-puts_half.c
 * @Auth: Nyange
 */

#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int len, n, i;

	len = strlen(str);
	
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
