#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * create_array - Create an array
 * @size: Size of array
 * @c: character
 *
 * Return: Array pointer
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar = (char*)malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
ar[i] = c;
}
return (ar);
}
}
