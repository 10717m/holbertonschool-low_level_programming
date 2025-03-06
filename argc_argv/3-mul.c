#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

/* Check if the number of arguments exactly 3 (program name + 2 arguments) */
if (argc != 3)
{
printf("Error\n");
return (1);
}

/* Convert the arguments to integers */
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

/* Multiply the numbers */
result = num1 *num2;

/* Print the result */
printf("%d\n", result);

return (0);
}
