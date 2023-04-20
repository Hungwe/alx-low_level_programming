#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "function_pointers.h"

/**
 * array_iterator - Performe actions on an array
 * @array: Array pointer
 * @size: Array size
 * @action: Function pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
