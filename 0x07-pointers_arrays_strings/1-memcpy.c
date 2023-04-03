#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _memcpy - Copies n bytes from a source pointer to a destination pointer
 * @dest: Destination pointer
 * @src: Source pointer
 * @n: Number of bytes
 *
 * Return: Pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *y;
y = memcpy(dest, src, n);
return (y);
}
