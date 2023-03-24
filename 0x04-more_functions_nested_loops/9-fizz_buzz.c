#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * fizz_buzz - print numbers 1 to 100 fizz at every multiple of 3
 * and buzz of 5 then fizzbuzz for multiples of both 3 and 5
 *
 */

void fizz_buzz(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz ");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
}
