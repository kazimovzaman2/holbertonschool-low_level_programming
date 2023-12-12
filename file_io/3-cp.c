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
	int file, new_file, bytesR, bytesW;
	char text[1024];

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
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}

	// Create new file
	new_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (new_file == -1)
	{
		close(file);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", new_file);
		exit(99);
	}


	// Main copying
	while (1)
	{
		bytesR = read(file, text, sizeof(text));
		if (bytesR > 0)
			bytesW = write(new_file, text, bytesR);
		else if (bytesR == 0)
			break;
		else
		{
			close(file);
			close(new_file);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", new_file);
			exit(99);
		}
	}



	// Check close if there are some problem print error
	if (close(file) == -1 || close(new_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (close(file) == -1) ? file : new_file);
		exit(100);
	}
}
