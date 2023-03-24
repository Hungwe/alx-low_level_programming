#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_line - print lines relative to number n
 * @n: input number
 *
 */

void print_line(int n)
{
if (n <= 0)
{
putchar('$');
putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('$');
putchar('\n');
}
}
