/*
 * File: 0-positive_or_negative.c
 * Auth: Nyange
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else if (n < 0)
<<<<<<< HEAD
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
=======
    	{
	printf("%d is negative\n", n);
	}
	else
    	{
	printf("%d is positive\n", n);
>>>>>>> c9494c3b366ff95834e71cf3d05572a84c5f1d77
	}	
	return (0);

}
