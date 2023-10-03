#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _strncpy - Return a segmented string using pointers
 * @dest: Initial segment pointer
 * @src: Pointer for bytes to accept from
 * @n
 *
 * Return: Number of bytes occurring in another string
 */

char *_strncpy(char *dest, char *src, int n)
{
char *a;

a = dest + *src + n;
return (a);
}
