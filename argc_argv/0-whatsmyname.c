#include <stdio.h>

/**
 * main - Prints the program's name, followed by a new line.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
(void)argc; /* Unused parameter */
printf("%s\n", argv[0]);
return (0);
}
