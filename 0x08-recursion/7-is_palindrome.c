#include "holberton.h"

/*
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
int length;

length = get_length(s) - 1;

return (call_sall(s, --length));
}

/**
 * get_length - obtain string length 
 * @s: string 
 * Return: length of string
 */

int get_length(char *s)
{
if (*s == '\0')
return (1);
else
return (1 + get_length(++s));
}

/**
 * call_sall - recursively checks for palindrome
 * @s: string
 * @l: string length
 * Return: 1 for present palindrome, 0 if absent
 */

int call_sall(char *s, int l)
{
if (*s == *(s + l))
{
if (l <= 0)
return (1);
else
return (call_sall(++s, l - 2));
}
else
return (0);
}
