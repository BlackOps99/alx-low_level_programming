#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * error_file - checks if files can be opened.
 * @fd_source: file_from.
 * @fd_dest: file_to.
 * @argv: arguments vector.
 * Return: No Thing.
 */
void error_file(int fd_source, int fd_dest, char *argv[])
{
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * copy_file - function copy from and to files
 * @file_from: the file name that will copy from
 * @file_to: the file name that will copy to
 * @argv: files names
 * Return: No Thing.
 */
void copy_file(const char *file_from, const char *file_to, char *argv[])
{
	int fd_source, fd_dest;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	fd_source = open(file_from, O_RDONLY);
	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);

	error_file(fd_source, fd_dest, argv);

	while ((bytes_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);

		if (bytes_written == -1)
			error_file(0, -1, argv);
	}

	if (bytes_read == -1)
		error_file(-1, 0, argv);

	if (close(fd_source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}

	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
}
/**
 * main - the EndPoint
 * @argc: type int
 * @argv: char pointer
 * Return: 1 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	copy_file(file_from, file_to, argv);

	return (0);
}
