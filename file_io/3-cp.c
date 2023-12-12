#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * @argc: var
 * @argv: var
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file, new_file;
	char *text;

	// Check the argument count
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	// Open file
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", file);
		exit(98);
	}

	// Create new file
	new_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (new_file == -1)
	{
		close(file);
		printf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", new_file);
		exit(99);
	}







	if (close(file) == -1 || close(new_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (close(file) == -1) ? file : new_file);
		exit(100);
	}
}
