/*
 * File: 8-print_base16.c
 * Auth: Nyange
 */
#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

