#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

void print_error(int code, char *message, char *arg);

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, or appropriate error code
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, read_bytes, write_bytes;
char buffer[BUFFER_SIZE];
mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

/* Check argument count */
if (argc != 3)
{
print_error(97, "Usage: cp file_from file_to", NULL);
}

/* Open source file */
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
print_error(98, "Can't read from file", argv[1]);
}

/* Open destination file */
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
if (fd_to == -1)
{
print_error(99, "Can't write to", argv[2]);
}

/* Copy file contents */
while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE))
{
if (read_bytes == -1)
{
print_error(98, "Can't read from file", argv[1]);
}

write_bytes = write(fd_to, buffer, read_bytes);
if (write_bytes == -1 || write_bytes != read_bytes)
{
print_error(99, "Can't write to", argv[2]);
}
}

/* Close file descriptors */
if (close(fd_from) == -1)
{
print_error(100, "Can't close fd", NULL);
dprintf(STDERR_FILENO, "%d\n", fd_from);
exit(100);
}

if (close(fd_to) == -1)
{
print_error(100, "Can't close fd", NULL);
dprintf(STDERR_FILENO, "%d\n", fd_to);
exit(100);
}

return (0);
}

/**
 * print_error - prints an error message to stderr and exits
 * @code: exit code
 * @message: error message
 * @arg: additional argument for the message
 */
void print_error(int code, char *message, char *arg)
{
dprintf(STDERR_FILENO, "Error: %s", message);
if (arg)
{
dprintf(STDERR_FILENO, " %s", arg);
}
dprintf(STDERR_FILENO, "\n");
exit(code);
}
