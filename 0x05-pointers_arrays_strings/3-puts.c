#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: pointer arg for string 
 * Description: Use _putchar only.
 */

void _puts(char *str)
{
int len = 0;

while (*(str + len) != '\0')
{
_putchar(*(str + len));
len++;
}
_putchar('\n');
}
