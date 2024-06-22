/*
 * File: 7-print_tebahpla.c
 * Auth: Nyange
 */
#include <stdio.h>

/**
 * main - Prints the alphabet in reverse lowercase followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

