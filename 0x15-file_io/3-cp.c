#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 *print_error - a function that print message_____
 *@message:message in file _______
 * Return: returns no______
 */
void print_error(const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
}

/**
 *main - a program that copies the content of a file to another file____
 *@argv:array of parameters____
 *@argc:argument of counter_____
 *Return: returns (0)______
 */

int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
if (argc != 3)
{
print_error("Usage: cp file_from file_to");
exit(97); }
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99); } }
if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); }
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor for %s\n", argv[1]);
exit(100); }
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor for %s\n", argv[2]);
exit(100); }
return (0);
}
