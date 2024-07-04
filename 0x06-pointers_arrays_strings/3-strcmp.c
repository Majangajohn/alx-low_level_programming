/*
 * FILE: 3-strcmp.c
 * @Auth: Nyange
 */

#include "main.h"
#include <string.h>
/**
 * _strcmp - Compare two strings
 * @s1: string
 * @s2: string
 *
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
