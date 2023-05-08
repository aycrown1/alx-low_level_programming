#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

/**
 * open_buffer - allocates a buffer for reading/writing file contents.
 * @file: the name of the file.
 * Return: returns a pointer to the allocated buffer.
 */
char *open_buffer(char *file)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - used to close a file descriptor.
 * @file_decriptor: the file descriptor.
 * handle closing of both the source and destination files.
 */
void close_file(int file_decriptor)
{
	if (close(file_decriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_decriptor);
		exit(100);
	}
}

/**
 * cp - does the core operation of copying the contents of one file to another.
 * @source: the file descriptors for the source.
 * @destination: the file descriptors for the destination.
 */
void cp(int source, int destination)
{
	char *buffer;
	ssize_t reading, writing;

	buffer = open_buffer("file");

	while ((reading = read(source, buffer, 1024)) > 0)
	{
		writing = write(destination, buffer, reading);
		if (writing == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			free(buffer);
			close_file(source);
			close_file(destination);
			exit(99);
		}
	}

	if (reading == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		free(buffer);
		close_file(source);
		close_file(destination);
		exit(98);
	}

	free(buffer);
	if (close(source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file\n");
		exit(98);
	}
	if (close(destination) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file\n");
		exit(98);
	}
}

/**
 * main - the entry point of the program.
 * @argc: the number of command line arguments passed to the program.
 * @argv: array of strings representing the command line arguments.
 * Return: 0 on success, non-zero on error
 */
int main(int argc, char *argv[])
{
	int source, destination;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s for reading\n", argv[1]);
		exit(98);
	}

	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s for writing\n", argv[2]);
		close_file(source);
		exit(99);
	}

	cp(source, destination);

	return (0);
}

