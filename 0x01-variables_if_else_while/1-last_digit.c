/*
 * File: 0-positive_or_negative.c
 * Auth: Nyange
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number and states whether
 *        the last digit greater than 5, less than 5 or 0.
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and ", n, last_digit);
		printf("is less than 6 and not 0\n");
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}	return (0);
}
