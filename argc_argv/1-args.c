#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
(void)argv; /* Unused parameter */
printf("%d\n", argc - 1);
return (0);
}
