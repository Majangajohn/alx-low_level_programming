/*
 * FILE: 0-isupper.c
 * Auth: Nyange
 */ 
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * Returns 1 when upper and 0 when lower
 *
 * Return: 1 when is upper, 0 when lower
 */

int _isupper(int c)
{
	if (isupper(c))
		
		return (1);
	else

		return (0);


}