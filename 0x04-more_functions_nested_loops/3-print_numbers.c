/*
 *FILE: 3-print_numbers.c
 *@Auth: Nyange
 */

#include "main.h"

/**
*print_numbers - print 0123456789
*
*
*/

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
	_putchar(c + '0');
	}
	_putchar('\n');
}
