#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - Return the sum a+b
 * @a: First number to add
 * @b: Second number to add
 *
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Return a-b
 * @a: The number to be subtracted
 * @b: The number to subtract from a
 *
 * Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Return a*b
 * @a: The first number to multiply
 * @b: The second number to multiply
 *
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Return a div b
 * @a: The number to be divided
 * @b: The number to divide a by
 *
 * Return: a div b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Return a mod b
 * @a: The number to be divided
 * @b: The number to divide a by
 *
 * Return: a mod b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
