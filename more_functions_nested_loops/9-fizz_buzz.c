#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 1 to 100, replacing multiples of 3  Fizz,
 * multiples of 5 with Buzz, and multiples of both 3 and 5 with FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++) /* Loop through numbers 1 to 100 */
{
if (i % 3 == 0 && i % 5 == 0) /* Check for multiples of both 3 and 5 */
{
printf("FizzBuzz");
}
else if (i % 3 == 0) /* Check for multiples of 3 */
{
printf("Fizz");
}
else if (i % 5 == 0) /* Check for multiples of 5 */
{
printf("Buzz");
}
else /* Print the number if not a multiple of 3 or 5 */
{
printf("%d", i);
}

if (i < 100) /* Add a space between numbers/words */
{
printf(" ");
}
}

printf("\n"); /* Print a newline at the end */
return (0);
}
