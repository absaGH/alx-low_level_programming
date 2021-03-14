#include "holberton.h"

/**
 * isprime - tests to see if number is prime
 * @div: possible divisor check
 * @num: number to be tested
 *
 * Return: 1 if prime, 0 if not
 */
int isprime(int div, int num)
{
if (num < 2 || num % div == 0)
return (0);
else if (div > num / 2)
return (1);
else
return (isprime(fact + 1, num));
}

/**
 * is_prime_number - determines whether a number is prime or not
 * @n: number to be validated
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (isprime(2, n));
}
