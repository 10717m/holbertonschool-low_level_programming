#include "main.h"
#include <limits.h> /* Include limits.h for INT_MAX and INT_MIN */

/**
 * _atoi - Converts a string to an integer.
 * @s: A pointer to the string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int sign = 1; /* Initialize sign as positive */
int result = 0; /* Initialize result */
int i = 0;

/* Skip leading spaces */
while (s[i] == ' ')
{
i++;
}

/* Handle signs */
while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
{
sign *= -1; /* Toggle sign for each '-' */
}
i++;
}

/* Convert digits to integer */
while (s[i] >= '0' && s[i] <= '9')
{
/* Check for overflow */
if (result > INT_MAX / 10 ||
(result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
{
return (sign == 1 ? INT_MAX : INT_MIN);
}

result = result * 10 + (s[i] - '0');
i++;
}

return (result *sign);
}
