#include "holberton.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: integer
 * Returns: the factorial of a given number.
 * Description: If n is lower than 0, the function should return -1 to indicate an error
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n < 2)
return (n);
else
return (n * factorial(n - 1));

}
