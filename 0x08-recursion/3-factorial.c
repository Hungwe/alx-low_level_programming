#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * factorial - Return factorial of a number
 * @n: Input number
 *
 * Return: Integer
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else if (n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
