#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc:
 * @argv:
 * Return: 1 if erroneous, 0 if correct
 */

int main(int argc, char *argv[])
{
(void) argc;

if (argv[1] && argv[2])
{
printf("%d\n", atoi(argv[1] * atoi(argv[2]));
return (0);
}
else
printf("Error\n");

return (1);
}
