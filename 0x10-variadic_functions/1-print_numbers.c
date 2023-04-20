#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers seperatred by a string
 * @separator: Initial segment pointer
 * @n: Number of arguments
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list args;
va_start(args, n);
if (separator == NULL)
{
return;
}
else
{
for (i = 0; i < n - 1; i++)
{
num = va_arg(args, int);
printf("%d", num);
printf("%s", separator);
}
for (i = n - 1; i < n; i++)
{
num = va_arg(args, int);
printf("%d", num);
}
printf("\n");
}
}
