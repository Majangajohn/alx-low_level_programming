/*
 * FILE: 4-strpbrk.c
 * @Auth: Nyange
 */

#include "main.h"
#include <string.h>

/**
*_strpbrk - The _strpbrk() function locates the first
* occurrence in the string s of any of the bytes in
*the string accept
*
*@s: string where search is made
*@accept: string where searched bytes are located
*
*Return:Returns a pointer to the byte in s that matches
* one of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	char *result = strpbrk(s, accept);
	
	if (result != NULL)
	{
		return (result);
	}
	else
	{
		return (NULL);
	}
}
