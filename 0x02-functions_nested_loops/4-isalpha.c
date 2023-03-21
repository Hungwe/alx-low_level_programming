#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Checks for letter
 * @c: Input parameter
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
int l = isalpha();
if (l > 0)
{
return (1);
}
else
{
return (0);
}
}
