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
printf("+\n");
return (1);
}
if (n == 0)
{
printf("0\n");
return (0);
}
else
{
printf("-\n");
return (-1);
}
}
