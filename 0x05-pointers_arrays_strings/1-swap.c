#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * swap_int - swap integers via pointers
 * @a: Input pointer a
 * @b: Input pointer b
 *
 */

void swap_int(int *a, int *b)
{
int c;
int d;
c = *a;
d = *b;
*a = d;
*b = c;
}
