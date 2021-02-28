#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: arg count
 * @argv: arg vector and array of strs
 * Return: 1 if erroneous, 0 if correct
 */

int main(int argc, char *argv[])
{
int total, i;
char *p;
int num;

total = 0;
if (argv > 1)
{
for (i = 1; argv[i]; i++)
{
num = strtol(argv[i], &p, 10);
if (!*p)
total += num;
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", total);

return (0);
}
