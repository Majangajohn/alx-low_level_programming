/*
 * FILE: -islower.c
 * Auth: Nyange
 */
#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (islower(c))
	{
<<<<<<< HEAD
		return (1);
	}
	else
	{
		return (0);
=======
		return (1);	
>>>>>>> 85d43cd3fdb6183743afd4069db23af4f194f3cb
	}
}
