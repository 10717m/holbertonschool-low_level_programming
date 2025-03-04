#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
const char *message = "and that piece is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 59); /* 59 is the length  message including the newline */
return (1);
}
