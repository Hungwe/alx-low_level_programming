#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_array - prints out a number of elements using pointers
 * @a: Input array pointer
 * @n: Number of elements to be printed
 *
 */

void print_array(int *a, int n)
{
int i;
int temp;
for (i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}
temp = n - 1;
printf("%d\n", a[temp]);
}
