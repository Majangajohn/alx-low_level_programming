/*
 * FILE: 2-strchr.c
 * @Auth: Nyange
 *
 */

#include "main.h"
#include <string.h>

/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: returns pointer to first occcurence of c
*/
char *_strchr(char *s, char c)
{
	char *result = strchr(s, c);

	if (result != NULL)
	{
		return (result);
	}
	else
	{
		return (NULL);
	}
}
