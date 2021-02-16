#include "holberton.h"

/**
 * rev_string - reverses a string.
 *
 * @s: characters
 */

void rev_string(char *s)
{
int g, numb;
int tmpry = 0;

for(numb=0; strg[numb] != 0; numb++);

for(g = 0; g <numb/2; g++)
{
tmpry = strg[g];
strg[g]=strg[numb - 1 - g];
strg[numb - 1 - g] = tmpry;
}
  
for(g = 0; g < numb; g++)
  {
_putchar(strg[g]);
  }
_putchar(" \n ");
}
