/*
 * File:5-print_numbers.c
 * Auth: Nyange
 */
#include <stdio.h>

/**
 * main - Prints all single-digit numbers of base 10 starting from 0,
 *        followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}

	printf("\n");

	return (0);
}

