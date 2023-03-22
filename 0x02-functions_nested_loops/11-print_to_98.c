#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_to_98 - Print numbers to 98
 * @n: Input parameter
 *
 * Return: list of numbers up to or down to 98
 */

void print_to_98(int n)
{
if (n < 98)
{
int i;
for (i = n; i < 99; i++)
{
printf("%d, ", i);
}
printf("\n");
}
else
{
int j;
for (j = n; j > 97; j--)
{
printf("%d, ", j);
}
printf("\n");
}
}
