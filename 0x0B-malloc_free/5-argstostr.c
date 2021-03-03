#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arg counter
 * @av: arg value
 * Return: NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
int x;
int y;
int total; 
char *p, *conct;

if (ac == 0 || av == NULL)
{
return (NULL);
}
for (x = 0, total = 0; x < ac; x++)
{
for (y =0; *(*(av + 1) + j) != '\0'; y++, total++);	
total++;
}
total++;

p = malloc(total * sizeof(char));
if (p == NULL)
{
return (NULL);
}

conct = p;
for (x = 0, x < ac; x++)
{
for (y = 0; av[x][y] != '\0'; y++)
{
*p = av[x][y];
p++;
}
*p ='\n';
p++;
}

return (conct);
}
