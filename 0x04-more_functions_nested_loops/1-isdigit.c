#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks if c is digit
 * @c: Input char
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
int a;
a = isdigit(c);

if (a > 0)
{
return (1);
}
else
{
return (0);
}
}
