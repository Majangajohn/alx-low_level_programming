/*
 * File: 0-pos4-print_alphabt.c
 * Auth: Nyange
 */
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase followed by a new line except q & e
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}

