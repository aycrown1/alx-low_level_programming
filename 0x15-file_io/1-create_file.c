#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * create_file - Creates a file with the given name and
 *			writes the given text to it.
 * @filename: The name of the file to create.
 * @text_content: The text to write to the file. If NULL, create an empty file.
 * Return: 1 on success, -1 on failure.
 *
 * The created file has permissions rw-------.
 * If the file already exists, truncate it.
 * If filename is NULL, return -1.
 * If the file cannot be created or written, return -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	size_t text_length;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file_descriptor = open(filename,
			O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		bytes_written = write(file_descriptor, text_content, text_length);
		if (bytes_written != text_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}

