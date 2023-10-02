#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 *create_file - a function that creates a file__
 *@filename:file how will has operators _______
 * @text_content: text in this file______
 * Return: returns 1 ______
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t writting;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
writting = write(fd, text_content, strlen(text_content));
if (writting == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
