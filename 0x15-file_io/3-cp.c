#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * exit_with_error - function handle exit codes and messages
 * @exit_code: The Status Code of exit
 * @error_message: The Messagw That Will Show After Exit
 * Return: No Thing
 */
void exit_with_error(int exit_code, const char *error_message)
{
	dprintf(STDERR_FILENO, "%s\n", error_message);
	exit(exit_code);
}
/**
 * copy_file - function copy from and to files
 * @file_from: the file name that will copy from
 * @file_to: the file name that will copy to
 * Return: 1 on success, -1 on failure
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_source, fd_dest;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	fd_source = open(file_from, O_RDONLY);

	if (fd_source == -1)
		return (-1);

	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_dest == -1)
	{
		close(fd_source);
		return (-1);
	}

	while ((bytes_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_source);
			close(fd_dest);
			return (-1);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_source);
		close(fd_dest);
		return (-1);
	}

	if (close(fd_source) == -1 || close(fd_dest) == -1)
		return (-1);

	return (0);
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
	int result;

	if (argc != 3)
	{
		exit_with_error(97, "Usage: cp file_from file_to");
	}

	result = copy_file(file_from, file_to);
	if (result == -1)
	{
		exit_with_error(98, "Error: Can't read/write from/to file");
	}

	return (0);
}
