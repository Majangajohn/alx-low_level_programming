/**
 * FILE: 2-print_alphabet_x10.c
 * Auth: Nyange
 *
 *
 */

#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet 10 times in lowercase.
*
* This function prints the lowercase alphabet repeatedly 10 times.
*/
void print_alphabet_x10(void)
{
	int letter, i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}

}
