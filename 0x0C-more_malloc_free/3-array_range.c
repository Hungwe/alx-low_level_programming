#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * array_range - Create an array of integers
 * @min: Minimum number
 * @max: Maximum number
 *
 * Return: Pointer for new memory location
 */

int *array_range(int min, int max)
{
int diff;
diff = (max - min) + 1;
int arr[diff];
int *ptr;
ptr = arr;
int sum;
int i;
sum = 0;
if (min > max)
{
return (NULL);
}
else
{
ptr = malloc(sizeof(int) * diff);
for (i = 0; i < diff; i++)
{
ptr[i] = sum;
sum = sum + 1;
}
return (ptr);
}
}
