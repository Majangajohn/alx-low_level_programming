/*
 * File: 102-print_comb5.c
 * Auth: Nyange
 */
#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int c, i, k, j;

	for (c = 0; c <= 99; c++)
	{
		for (i = 0; i <= 99; i++)
		{
			for (k = 0; k <= 99; k++)
			{
				for (j = 0; j <=99; j++)
				{
					if (((k + j) > (c + i) &&  k >= c) || c < k)
					{
						putchar(c);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);

					if (c + i + k + j == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

