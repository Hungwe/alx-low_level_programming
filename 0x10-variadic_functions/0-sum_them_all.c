#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum up all integers
 * @n: Number of arguments
 *
 * Return: Integer
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum;
int y;
unsigned int i;
sum = 0;
va_start(args, n);
if (n == 0)
{
return (0);
}
else
{
for (i = 0; i < n; i++)
{
y = va_arg(args, int);
sum = sum + y;
}
va_end(args);
return (sum);
}
}
