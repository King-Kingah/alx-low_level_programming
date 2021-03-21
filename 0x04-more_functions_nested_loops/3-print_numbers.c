#include "holberton.h"

/**
 *print_numbers - prints numbers 0 to 9
 *@void: no argument
 *
 *Return: always 0
 */
int print_numbers(void)
{
int a;

for (a = 0; a <= 9; a++)
{
_putchar(a + '0');
}
  _putchar('\n');

return (0);
}
