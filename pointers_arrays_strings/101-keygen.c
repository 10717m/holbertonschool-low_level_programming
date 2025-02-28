#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
char password[100]; /* Adjust size as needed */
int sum = 0;

/* Seed the random number generator */
srand(time(NULL));

/* Generate random characters */
for (i = 0; sum < 2772; i++)
{
password[i] = rand() % 94 + 33; /* Printable ASCII characters */
sum += password[i];
}

/* Adjust the last character to make the sum exactly 2772 */
password[i] = 2772 - (sum - password[i]);
password[i + 1] = '\0'; /* Null-terminate the string */

/* Print the password */
printf("%s", password);

return (0);
}
