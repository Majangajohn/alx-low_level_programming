/*
 * File: 0-memset.c
 * Auth: Nyange
 */

#include "main.h"
#include <string.h>
/**
*_memset - The _memset() function fills
* the first n bytes of the memory area
* pointed to by s with the constant byte b
*@s:target
*@b: constant byte
*@n:number of byte
*Return: returns new value of target
*/

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
