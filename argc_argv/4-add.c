#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Checks if a string represents a positive number.
 * @str: The string to check.
 *
 * Return: 1 if the string is a positive number, 0 otherwise.
 */
int is_positive_number(char *str)
{
while (*str)
{
if (!isdigit(*str))
{
return (0);
}
str++;
}
return (1);
}

/**
 * main - Adds positive numbers passed as command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;

/* If no arguments are passed, print 0 and return */
if (argc == 1)
{
printf("0\n");
return (0);
}

/* Loop through arguments and validate them */
for (i = 1; i < argc; i++)
{
if (!is_positive_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}

/* Print the sum */
printf("%d\n", sum);

return (0);
}
