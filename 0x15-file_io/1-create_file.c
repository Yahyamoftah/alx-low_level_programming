#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - main func
 * @filename: an inp
 * @text_content: an inp
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
int fd, bytes_written;
int i = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[i] != '\0')
i++;

bytes_written = write(fd, text_content, i);
if (bytes_written == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}

