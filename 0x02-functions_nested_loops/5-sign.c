#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - Print sign according to variable
 * @n: input variable
 *
 * Return: 1 or 0 or -1.
 */

int print_sign(int n)
{
if (n > 0)
{
return (1);
printf("+\n");
}
if (n == 0)
{
return (0);
printf("0\n");
}
if (n < 0)
{
return (-1);
printf("-\n");
}
}
