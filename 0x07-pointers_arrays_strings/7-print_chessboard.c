#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_chessboard - Print the chessboard
 * @a: Chessboard pointer
 *
 */

void print_chessboard(char (*a)[8])
{
int i;
int j;
char y;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
y = a[i][j];
printf("%c", y);
}
printf("\n");
}
}
