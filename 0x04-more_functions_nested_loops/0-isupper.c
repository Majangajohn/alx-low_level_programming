/*
* FILE: 0-isupper.c
* Auth: Nyange
*/
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
