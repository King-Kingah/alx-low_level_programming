#include "holberton.h"
#include <stdio.h>

/**
 * main - prints all given arguments given through command line
 * @argc: which stores the total number of arguments
 * @argv: which stores the array of strings that mean all arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i = 0;

while (i < argc)
printf("%s\n", argv[i++]);

return (0);
}
