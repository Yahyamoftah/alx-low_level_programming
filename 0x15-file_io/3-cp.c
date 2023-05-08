#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void exit_with_error(int code, const char *message) {
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}

int main(int argc, char *argv[]) {
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3) {
exit_with_error(97, "Usage: cp file_from file_to");
}

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1) {
exit_with_error(98, "Error: Can't read from file %s", argv[1]);
}

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (fd_to == -1) {
exit_with_error(99, "Error: Can't write to %s", argv[2]);
}

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read || bytes_written == -1) {
exit_with_error(99, "Error: Can't write to %s", argv[2]);
}
}

if (bytes_read == -1) {
exit_with_error(98, "Error: Can't read from file %s", argv[1]);
}

if (close(fd_from) == -1) {
exit_with_error(100, "Error: Can't close fd %d", fd_from);
}

if (close(fd_to) == -1) {
exit_with_error(100, "Error: Can't close fd %d", fd_to);
}

return 0;
}

