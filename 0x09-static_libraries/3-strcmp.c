#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _strcmp - Return a segmented string using pointers
 * @s1: Initial segment pointer
 * @s2: Pointer for bytes to accept from
 *
 * Return: Number of bytes occurring in another string
 */

int _strcmp(char *s1, char *s2)
{
int a;

a = *s1 + *s2;
return (a);
}
