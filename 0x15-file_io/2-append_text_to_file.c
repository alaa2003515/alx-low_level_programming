#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <string.h>

/**
 *append_text_to_file - a function that appends text at the end of a file_____
 *@filename:file how will has operators _______
 * @text_content: text in this file_______
 * Return: returns 1 ______
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t appends, stor_lenth;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
stor_lenth = strlen(text_content);
appends = write(fd, text_content, stor_lenth);
if (appends == -1 || (ssize_t) appends != stor_lenth)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
