#include <stdio.h>

/**
 * main - print the name of the file it was compiled from
 * 
 * Return: zero (succesfull)
 */

int main(int argc, char **argv)
{
  printf("%s\n", argv[0]);
  return (0);
}
