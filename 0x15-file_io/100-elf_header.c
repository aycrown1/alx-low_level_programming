#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

#define BUFFER_SIZE 128

/**
 * error - Display error message and exit with failure status code
 * @msg: the error message to be printed.
 *
 */
void error(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * print_elf_header - Prints the ELF header information
 *				contained in the given file.
 * @header: a pointer to the ELF header structure.
 * Exits with status code 98 and
 *	prints an error message if the file is not an ELF file or
 *		if an error occurs.
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
		   (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
		(header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" :
		   "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
		   header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n",
		   header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
		   header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
		   (header->e_type == ET_NONE) ? "NONE (None)" :
		   (header->e_type == ET_REL) ? "REL (Relocatable file)" :
		   (header->e_type == ET_EXEC) ? "EXEC (Executable file)" :
		   (header->e_type == ET_DYN) ? "DYN (Shared object file)" :
		   (header->e_type == ET_CORE) ? "CORE (Core file)" :
		   "Unknown");
	printf("  Entry point address:               0x%lx\n",
		   header->e_entry);
	printf("\n");
}

/**
 * main - The entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char **argv)
{
	ssize_t num_bytes_read;
	char *filename;
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		error("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		error("Error: Could not open file");
	}
	num_bytes_read = read(fd, &header, sizeof(header));
	if (num_bytes_read != sizeof(header))
	{
		error("Error: Could not read ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		error("Error: Not an ELF file");
	}

	print_elf_header(&header);

	if (close(fd) == -1)
	{
		error("Error: Could not close file");
	}

	return (0);
}

