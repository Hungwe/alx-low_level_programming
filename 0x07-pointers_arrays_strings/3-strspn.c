#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _strspn - prints out a string using pointers
 * @s: Initial segment pointer
 * @accept: Pointer for bytes to accept from
 *
 * Return: Number of bytes occurring in another string
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int y;
y = strspn(s, accept);
return (y);
}
