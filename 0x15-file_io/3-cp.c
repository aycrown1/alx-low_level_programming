#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * cp - Copies the contents of one file to another
 * @src_path: The name of the file to copy from
 * @dest_path: The name of the file to copy to
 *
 * Return: 0 on success, failure
 */
int cp(const char *src_path, const char *dest_path)
{
	int src_fd, dest_fd;
	ssize_t read_result, write_result;
	char buffer[BUFFER_SIZE];

	src_fd = open(src_path, O_RDONLY);
	if (src_fd == -1)
	{
		return (-1);
	}

	dest_fd = open(dest_path, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (dest_fd == -1)
	{
		close(src_fd);
		return (-2);
	}

	while ((read_result = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		write_result = write(dest_fd, buffer, read_result);
		if (write_result != read_result)
		{
			close(src_fd);
			close(dest_fd);
			return (-2);
		}
	}

	if (read_result == -1)
	{
		close(src_fd);
		close(dest_fd);
		return (-2);
	}
	if (close(src_fd) == -1 || close(dest_fd) == -1)
	{
		return (-3);
	}
	return (0);
}

/**
 * main - The entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		return (97);
	}

	result = cp(argv[1], argv[2]);

	if (result == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	else if (result == -2)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	else if (result == -3)
	{
		dprintf(2, "Error: Can't close fd %d\n", result);
		return (100);
	}

	return (0);
}


