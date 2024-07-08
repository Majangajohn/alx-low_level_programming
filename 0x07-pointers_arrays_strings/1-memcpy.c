/*
 * FILE: 1-memcpy.c
 * @Auth: Nyange
 */

#include "main.h"
#include <string.h>

/**
 *_memcpy - The _memcpy() function copies n bytes
 *from memory area to src to memory area dest
 *@dest: area where bytes are copied to
 *@src: area where bytes are copied from
 *@n:number of bytes to copy
 *Return: returns a pointer to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
