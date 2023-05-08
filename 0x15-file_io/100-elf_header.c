#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void iself(unsigned char *array);
void MAGIC(unsigned char *array);
void CLASS(unsigned char *array);
void DATA(unsigned char *array);
void VERSION(unsigned char *array);
void ABI_VERSION(unsigned char *array);
void OS_ABI(unsigned char *array);
void TYPE(unsigned int type, unsigned char *array);
void ENTRY(unsigned long int e_entry, unsigned char *array);
void close_elf(int elf);

/**
 * main - the entry point of the ELF header program.
 * @argc: the number of command line arguments passed to the program.
 * @argv: array of strings representing the command line arguments.
 * Return: returns 0, indicating successful execution.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int opener, reader;

	opener = open(argv[1], O_RDONLY);
	if (opener == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(opener);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	reader = read(opener, header, sizeof(Elf64_Ehdr));
	if (reader == -1)
	{
		free(header);
		close_elf(opener);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	iself(header->e_ident);
	printf("ELF Header:\n");
	MAGIC(header->e_ident);
	CLASS(header->e_ident);
	DATA(header->e_ident);
	VERSION(header->e_ident);
	OS_ABI(header->e_ident);
	ABI_VERSION(header->e_ident);
	TYPE(header->e_type, header->e_ident);
	ENTRY(header->e_entry, header->e_ident);

	free(header);
	close_elf(opener);
	return (0);
}

/**
 * iself - checking if a given file is an ELF
 *		(Executable and Linkable Format) file.
 * @array: A pointer to the first few bytes of the file being checked.
 */
void iself(unsigned char *array)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (array[index] != 127 &&
			array[index] != 'E' &&
			array[index] != 'L' &&
			array[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * MAGIC - Prints the magic numbers of the ELF header.
 * @array: A pointer to an array containing the ELF magic numbers,
 * which are the first bytes of the ELF header..
 */
void MAGIC(unsigned char *array)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", array[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * CLASS - prints the class of the ELF header.
 * @array: A pointer to the ELF identification array.
 */
void CLASS(unsigned char *array)
{
	printf("  Class:                             ");

	switch (array[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", array[EI_CLASS]);
	}
}

/**
 * DATA - Prints the data encoding of the ELF header.
 * @array: A pointer to an array containing the ELF identification bytes.
 */
void DATA(unsigned char *array)
{
	printf("  Data:                              ");

	switch (array[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", array[EI_CLASS]);
	}
}

/**
 * VERSION - Prints the version information of the ELF header.
 * @array: A pointer used to access the version number of the ELF header.
 */
void VERSION(unsigned char *array)
{
	printf("  Version:                           %d",
		   array[EI_VERSION]);

	switch (array[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * ABI_VERSION - Prints the ABI version of an ELF header.
 * @array: A pointer to an array containing the ELF ABI version.
 */
void ABI_VERSION(unsigned char *array)
{
	printf("  ABI Version:                       %d\n",
		   array[EI_ABIVERSION]);
}

/**
 * OS_ABI - Prints the Operating System/Application Binary Interface
 *					(OS/ABI) of the ELF header.
 * @array: A pointer used to access the contents of the ELF header's
 *					identification field (e_ident).
 */
void OS_ABI(unsigned char *array)
{
	printf("  OS/ABI:                            ");

	switch (array[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", array[EI_OSABI]);
	}
}

/**
 * ENTRY - Prints the entry point of an ELF header.
 * @e_entry: the entry point address.
 * @array: A pointer to an array containing the ELF class.
 */
void ENTRY(unsigned long int e_entry, unsigned char *array)
{
	printf("  Entry point address:               ");

	if (array[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
				  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (array[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
/**
 * TYPE - Prints the type of the ELF header.
 * @type: The ELF type.
 * @array: A pointer to an array containing the ELF class.
 */
void TYPE(unsigned int type, unsigned char *array)
{
	if (array[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	printf("  Type:                              ");
	switch (type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", type);
	}
}

/**
 * close_elf - for closing an ELF file.
 * @elf: the file descriptor of the ELF file that needs to be closed.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}


