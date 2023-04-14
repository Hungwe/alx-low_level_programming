#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * malloc_checked - Allocate memorry using malloc
 * @b: Number of objects
 *
 * Return: Pointer
 */

void *malloc_checked(unsigned int b)
{
int *check;
int *numptr;
int num;
num = 98;
numptr = &num;
if (b == 0)
{
return (numptr);
}
else
{
check = malloc(sizeof(*check) * b);
return (check);
}
}
