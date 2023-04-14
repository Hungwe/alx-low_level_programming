#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Members of array
 * @size: Array size
 *
 * Return: Pointer to new memory location
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char arr[nmemb];
char *pt;
pt = arr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
else
{
pt = malloc(size * nmemb);
return (pt);
}
}
