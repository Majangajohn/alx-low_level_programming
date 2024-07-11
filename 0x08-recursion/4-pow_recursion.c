/*
 * FILE: 4-pow_recursion.c
 * @Auth: Nyange
 */

#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base number.
 * @y: pow number.
 * Return: power number.
 */

int _pow_recursion(int x, int y)
{
	int value = (int) pow(x, y);

	if (y < 0)
		return (-1);
	else
		return (value);
}
