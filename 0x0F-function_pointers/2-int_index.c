#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "function_pointers.h"

/**
 * int_index - Bring index of first occurance of similar number
 * @array: Array pointer
 * @size: Array size
 * @cmp: Function pointer for comparing
 *
 * Return: Number index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
if (array == NULL || cmp == NULL)
{
return;
}
if (size <= 0)
{
return (-1);
}
else
{
int ret;
int i;
for (i = 0; i < size; i++)
{
ret = cmp(array[i]);
if (ret != 0)
{
return (i);
}
else
{
continue;
}
}
}
return (-1);
}
