#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 1024

/**
 * error_exit - Prints an error message and exits with the specified code
 * @code: The exit code
 * @msg: The error message
 */
void error_exit(int code, const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * main - Copies the content of a file to another file
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char **argv)
{
int fd_from, fd_to, ret_read, ret_write;
char buffer[BUFSIZE];
if (argc != 3)
error_exit(97, "Usage: cp file_from file_to");
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, "Error: Can't read from file");
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
error_exit(99, "Error: Can't write to file");
while ((ret_read = read(fd_from, buffer, BUFSIZE)) > 0)
{
ret_write = write(fd_to, buffer, ret_read);
if (ret_write != ret_read)
error_exit(99, "Error: Can't write to file");
}
if (ret_read == -1)
error_exit(98, "Error: Can't read from file");
if (close(fd_from) == -1)
error_exit(100, "Error: Can't close file descriptor");
if (close(fd_to) == -1)
error_exit(100, "Error: Can't close file descriptor");
return (0);
}

