#include "main.h"

/**
*_atoi - Converts the string to an integer.
*@s: the string that should be converted
*
*Return: Integer after convertion.
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;

	while (*s)
	{
		if (*s == 45)
			sign *= -1;
		if (*s >= 48 && *s <= 57)
		{
			result = result * 10 + (*s - 48);

			if (*(s + 1) < 48 || *(s + 1) > 57)
			{
				break;
			}
		}
		s++;
	}
	return (result * sign);
}
