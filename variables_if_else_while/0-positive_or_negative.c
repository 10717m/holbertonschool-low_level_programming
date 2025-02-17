#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
int n;

/* Initialize random number generator */
srand(time(0));

/* Generate a random number and assign it to n */
n = rand() - RAND_MAX / 2;

/* Check if the number is positive, negative, or zero */
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);

return 0;
}

