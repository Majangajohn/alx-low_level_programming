/*
 * FILE: 3-mul.c
 * @Auth: Nyange
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main execution take splace here
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
