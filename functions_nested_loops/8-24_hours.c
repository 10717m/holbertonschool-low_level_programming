#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 *
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
int hour, minute;

/* Loop through hours (0 to 23) */
for (hour = 0; hour < 24; hour++)
{
/* Loop through minutes (0 to 59) */
for (minute = 0; minute < 60; minute++)
{
/* Print the hour (two digits) */
_putchar((hour / 10) + '0'); /* First digit of hour */
_putchar((hour % 10) + '0'); /* Second digit of hour */

/* Print the colon */
_putchar(':');

/* Print the minute (two digits) */
_putchar((minute / 10) + '0'); /* First digit of minute */
_putchar((minute % 10) + '0'); /* Second digit of minute */

/* Print a new line */
_putchar('\n');
}
}
}
