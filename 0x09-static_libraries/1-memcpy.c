#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _memcpy - Return a segmented string using pointers
 * @dest: Initial segment pointer
 * @src: Pointer for bytes to accept from
 * @n: number
 *
 * Return: Number of bytes occurring in another string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *a;

a = dest + *src + n;
return (a);
}
