#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _memset - Return a segmented string using pointers
 * @s: Initial segment pointer
 * @b: Pointer for bytes to accept from
 * @n: number
 *
 */


char *_memset(char *s, char b, unsigned int n)
{
char *a;

a = s + b + n;
return a;
}
