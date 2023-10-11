#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "function_pointers.h"
#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Function to sum two numbers.
 * @a: Number 1.
 * @b: Number 2.
 *
 * Return: Sum
 */

int op_add(int a, int b)
{
int sum;

sum = a + b;
return (sum);
}

/**
 * op_sub - Function to find the difference
 * @a: Number 1.
 * @b: Number 2.
 *
 * Return: Number
 */

int op_sub(int a, int b)
{
int dif;

dif = a - b;
return (dif);
}

/**
 * op_mul - Function to calculate product
 * @a: Number 1.
 * @b: Number 2.
 *
 * Return: Number
 */

int op_mul(int a, int b)
{
int mul;

mul = a * b;
return (mul);
}

/**
 * op_div - Function to divide
 * @a: Number 1.
 * @b: Number 2.
 *
 * Return: Number
 */

int op_div(int a, int b)
{
int div;

div = a / b;
return (div);
}

/**
 * op_mod - Function that gives remainder
 * @a: Number 1.
 * @b: Number 2.
 *
 * Return: Number
 */

int op_mod(int a, int b)
{
int remain;

remain = a % b;
return (remain);
}
