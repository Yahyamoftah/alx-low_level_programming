#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define USAGE
#define ERR_CANTREAD
#define ERR_CANTWRITE
#define ERR_CANTCLOSE
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/
 * main -  mian func
 * @argc: an innp
 * @argv: an inpp
 *
 * Return: 1 on success 0 on failure
 */

int main(int argc, char *argv[])
{
int from_file_descriptor = 0, to_file_descriptor = 0;
ssize_t bytes_read;
char buffer[buff_size];

if (argc != 3)
{
dprintf(STDERR_FILENO, USAGE);
exit(97);
}

from_file_descriptor = open(argv[1], O_RDONLY);
if (from_file_descriptor == -1)
{
dprintf(STDERR_FILENO, ERR_CANTREAD, argv[1]);
exit(98);
}

to_file_descriptor = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (to_file_descriptor == -1)
{
dprintf(STDERR_FILENO, ERR_CANTWRITE, argv[2]);
exit(99);
}

while ((bytes_read = read(from_file_descriptor, buffer, buff_size)) > 0)
{
ssize_t bytes_written = write(to_file_descriptor, buffer, bytes_read);
if (bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, ERR_CANTWRITE, argv[2]);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, ERR_CANTREAD, argv[1]);
exit(98);
}

int from_close_result = close(from_file_descriptor);
int to_close_result = close(to_file_descriptor);

if (from_close_result)
{
dprintf(STDERR_FILENO, ERR_CANTCLOSE, from_file_descriptor);
exit(100);
}

if (to_close_result)
{
dprintf(STDERR_FILENO, ERR_CANTCLOSE, to_file_descriptor);
exit(100);
}

return EXIT_SUCCESS;
}

