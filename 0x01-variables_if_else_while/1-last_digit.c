#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int n;
  int b;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  b = n % 10;

  if (b > 5)
    printf("Last digit of %i is %i and is greater than 5\n",
	   n, b);
  else if (b == 0)
    printf("Last digit of %i is %i and is 0\n", n, b);
  else
    printf("Last digit of %i is %i and is less than 6 and not 0\n",
	   n, b);

  return (0);
}
