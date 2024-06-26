/*
 *File: 1-alphabet.c
 *@Auth: Nyange
 * *
 */

#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, 
 * in lowercase, followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alphbt;

	for (alphbt = 'a'; alphbt <= 'z'; alphbt++)
	{
		_putchar(alphbt);

	}

	_putchar('\n');

}
