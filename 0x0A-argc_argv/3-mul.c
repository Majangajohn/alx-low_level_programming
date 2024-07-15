/*
 * FILE: 3-mul.c
 * @AUth: Nyange
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - code execution takes place
 * @argc: The size of the argv array.
 * @argv: An array containing the program command line arguments
 *
 * Return: Always 0 || 1.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");

		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
