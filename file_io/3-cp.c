#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_error - prints error message to stderr and exits
 * @code: exit code
 * @message: error message
 * @arg: additional argument for message
 */
void print_error(int code, char *message, char *arg)
{
dprintf(STDERR_FILENO, "Error: %s", message);
if (arg)
dprintf(STDERR_FILENO, " %s", arg);
dprintf(STDERR_FILENO, "\n");
exit(code);
}

/**
 * main - copies file content
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, read_bytes;
char buffer[BUFFER_SIZE];
mode_t perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

if (argc != 3)
print_error(97, "Usage: cp file_from file_to", NULL);

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
print_error(98, "Can't read from file", argv[1]);

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perms);
if (fd_to == -1)
print_error(99, "Can't write to", argv[2]);

while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
if (write(fd_to, buffer, read_bytes) != read_bytes)
print_error(99, "Can't write to", argv[2]);

if (read_bytes == -1)
print_error(98, "Can't read from file", argv[1]);

if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}

if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}

return (0);
}
