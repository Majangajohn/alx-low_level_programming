/*
 * FILE: 1-isdigit.c
 * Auth: Nyange
 */
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - write a function that check for a digit (0 through 9).
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
