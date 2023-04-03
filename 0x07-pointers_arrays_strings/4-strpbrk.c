#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _strpbrk - Get a pointer to a byte in a string matching bytes
 * @s: String pointer
 * @accept: Pointer for bytes to accept from
 *
 * Return: Pointer
 */

char *_strpbrk(char *s, char *accept)
{
char *y;
y = strpbrk(s, accept);
return (y);
}
