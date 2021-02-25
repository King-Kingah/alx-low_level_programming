#include "holberton.h"

/*
 * is_prime_number -  returns 1 if the input integer is a prime number, otherwise return 0
 * @n: integer
 * Description: a function that returns 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
if (n < 2)
return (0);
if (n < 4)
return (1);
return (hai(n, 2));
}

int _sqrt(int x, int i)
{
int square;

square = i * i;
if (square >= x)
return (i);
else
return (_sqrt(x, i + 1));
}

int hai(int n, int d)
{
if (n % d == 0)
return (0);
else if (_sqrt(n, 1) < d)
return (1);
else
    return (hai(n, d + 1));
}
