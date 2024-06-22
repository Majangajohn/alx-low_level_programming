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
<<<<<<< HEAD
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
    	{
		printf("%d is negative\n", n);
	}
	else
    	{
		printf("%d is positive\n", n);
	}	
	return (0);
=======
int n; 
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is positive\n", n);
} 
return (0);
>>>>>>> 7b9c6297099d19bc757fac5095ecb251225175a3
}
