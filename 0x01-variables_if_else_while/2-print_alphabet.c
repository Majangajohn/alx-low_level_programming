/*
 * File: 0-positive_or_negative.c
 * Auth: Nyange
 */
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

