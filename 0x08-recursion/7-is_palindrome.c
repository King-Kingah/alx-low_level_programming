#include "holberton.h"

/*
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 */

int is_palindrome(char *s)
{
int length;

length = get_length(s) - 1;

return (my_pal(s, --length));
}}

int get_length(char *s)
{
if (*s == '\0')
return (1);
else
    return (1 + get_length(++s));
}

int my_pal(char *s, int l)
{
if (*s == *(s + l))
{
if (l <= 0)
return (1);
else
	return (my_pal(++s, l - 2));
}
  else
    return (0);
}
