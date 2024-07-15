/*
 * FILE: 0-whatsmyname.c
 * @AUth: Nyange
 */

#include <stdio.h>
#include "main.h"

/**
 * main -this default function where code exercusion occurs
 * @argc: The size of the argv array.
 * @argv: An array containing the program command line arguments
 *
 * Return: Always argc.
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
