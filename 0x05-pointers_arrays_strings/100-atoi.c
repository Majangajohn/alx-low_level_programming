/*
 * FILE: 100-atoi.c
 * @aUTH: Nyange
 *
 */

#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	while (*s)
	{
		if (isdigit(*s) ||
			(*s == '-' && isdigit(*(s + 1))) ||
			(*s == '+' && isdigit(*(s +1)))
		)
		{
			return (atoi(s));
		}
		s++;
	}
	return (0);
}
