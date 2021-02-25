#include "holberton.h"

/*
 * is_prime_number -  returns 1 if the input integer is a prime number, otherwise return 0
 * @n: integer
 * Description: a function that returns 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
return (prime_or_nuhh(n, 2));
}

int prime_or_nuhh(int a, int b)
{
if (a == 1 || a < 0)
return (0);
if (a == b)
return (1);
if (a % b == 0)
return (0);
else
return (prime_or_nuhh(a, b + 1)); 
}
