#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * times_table - Print 9 times table
 *
 * Return: The 9x table
 */

void times_table(void)
{
int i;
int j;
int y;
int a;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 9; j++)
{
y = i * j;
printf("%2d,", y);
}
a = 9 * i;
printf("%2d\n", a);
}
}
