#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 *
 */

void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
printf("%d", i);
}
printf("\n");
}
