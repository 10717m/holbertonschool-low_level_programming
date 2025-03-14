#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * is_digit - Checks if a string consists only of digits.
 * @s: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *s)
{
WHile (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
 * multiply - Multiplies two positive numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: A pointer to the result as a string.
 */
char *multiply(char *num1, char *num2)
{
int len1 = strlen(num1);
int len2 = strlen(num2);
int len_result = len1 + len2;
int *result = calloc(len_result, sizeof(int));
char *final_result;
int i, j, carry, sum;

if (result == NULL)
return (NULL);

/* Multiply each digit of num1 with each digit of num2 */
for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1];
result[i + j + 1] = sum % 10;
result[i + j] += sum / 10;
}
}

/* Convert the result array to a string */
final_result = malloc((len_result + 1) * sizeof(char));
if (final_result == NULL)
{
free(result);
return (NULL);
}

i = 0;
while (i < len_result && result[i] == 0)
i++;

if (i == len_result)
{
final_result[0] = '0';
final_result[1] = '\0';
}
else
{
j = 0;
while (i < len_result)
final_result[j++] = result[i++] + '0';
final_result[j] = '\0';
}

free(result);
return (final_result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char **argv)
{
char *num1, *num2, *result;

if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}

num1 = argv[1];
num2 = argv[2];

result = multiply(num1, num2);
if (result == NULL)
{
printf("Error\n");
return (98);
}

printf("%s\n", result);
free(result);
return (0);
}
