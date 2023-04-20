#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print string separated by character
 * @separator: Pointer for string separator
 * @n: Pointer for bytes to accept from
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
const char *str;
va_list args;
va_start(args, n);
if (separator == NULL)
{
printf("\n");
return;
}
else
{
for (i = 0; i < n - 1; i++)
{
str = va_arg(args, const char *);
printf("%s", str);
printf("%s", separator);
}
for (i = n - 1; i < n; i++)
{
str = va_arg(args, const char *);
printf("%s", str);
}
printf("\n");
}
}
