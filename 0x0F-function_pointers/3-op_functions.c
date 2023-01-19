#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @c: first number
 * @d: second number
 *
 * Return: add
 */
int op_add(int c, int d)
{
	return (c + d);
}
/**
 * op_sub - subtracts two numbers
 * @c: first number
 * @d: second number
 *
 * Return: difference
 */
int op_sub(int c, int d)
{
	return (c - d);
}
/**
 * op_mul - multiplies two numbers
 * @c: first number
 * @d: second number
 *
 * Return: multiples
 */
int op_mul(int c, int d)
{
	return (c * d);
}
/**
 * op_div - divides two numbers
 * @c: first number
 * @d: second number
 *
 * Return: division
 */
int op_div(int c, int d)
{
	if (d == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (c / d);
}

/**
 * op_mod - calculates the module of two numbers
 * @c: first number
 * @d: second number
 *
 * Return: remainder of the division
 */
int op_mod(int c, int d)
{
	if (d == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (c % d);
}
