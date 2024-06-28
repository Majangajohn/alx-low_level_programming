/*
 *FILE: 4-print_most_numbers.c
 *@Auth: Nyange
 */

#include "main.h"

/**
* print_most_numbers - print 01356789
*
*
*/

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 || c != 4)
			_putchar(c + '0');
	}
	_putchar('\n');
}
