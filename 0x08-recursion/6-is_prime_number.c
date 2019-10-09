#include "holberton.h"

/**
 * prime - Increments count
 * @count: The number to divide
 * @p: The number to check
 *
 * Return: 1 if is prime 0 otherwise
 */

int prime(int count, int p)
{
if (p < 0)
return (0);
if (count == p)
return (1);
if (p % count == 0)
return (0);
else
return (prime(++count, p));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
if (n == 1)
return (0);
return (prime(2, n));
}
