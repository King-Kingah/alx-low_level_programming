#include "holberton.h"
#include <stdio.h>

/**
 * main - prints  the number of arguments passed into it.
 * @argc: an integer type of arguments that contains the number of arguments
 * @argv: an array of character pointer that contains all parameters
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
(void) argv;

printf("%d\n", argc - 1);

return (0);
}
