/*
 * FILE: 3-strspn.c
 * @Auth: Nyange
 */

#include "main.h"
#include <string.h>

/**
*_strspn - search the number of bytes in the initial
* segment of s which consist only of bytes from accept
*@s:segment targeted
*@accept:reference bytes container
*
*Return:returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
