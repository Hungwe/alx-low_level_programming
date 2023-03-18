#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int i;

for (i = 0; i < 11; i++)
{
if (i == 10)
{
break;
}
else
{
putchar('0' + i);
putchar(',');
putchar(' ');
}

}
putchar('\n');

return (0);
}
