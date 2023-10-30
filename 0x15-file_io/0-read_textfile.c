#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 *read_textfile - a function that reads a text file and prints it___
 *@filename:file how will has operators _______
 * @letters: counter of string______
 * Return: returns standard output ______
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t reaD, writting;
char *buff;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buff = malloc(sizeof(char) * (letters + 1));
if (buff == NULL)
{
close(fd);
return (0);
}
reaD = read(fd, buff, letters);
if (reaD == -1)
{
close(fd);
free(buff);
return (0);
}
writting = write(STDOUT_FILENO, buff, reaD);
if (writting != reaD)
{
close(fd);
free(buff);
return (0);
}
close(fd);
free(buff);
return (writting);
}
