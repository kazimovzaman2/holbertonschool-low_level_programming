#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"


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
	int file, new_file, bytesR, wr;
	char text[1024];

	/* Check the argument count */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Open file */
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Create new file */
	new_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (new_file == -1)
	{
		close(file);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}


	/* Main copying */
	while (1)
	{
		bytesR = read(file, text, sizeof(text));
		if (bytesR > 0)
		{
			wr = write(new_file, text, bytesR);
			if (wr == -1)
			{
				close(file);
				close(new_file);
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
		else if (bytesR == 0)
			break;
		else
		{
			close(file);
			close(new_file);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}



	/* Check close if there are some problem print error */
	if (close(file) == -1 || close(new_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (close(file) == -1) ? file : new_file);
		exit(100);
	}

	return (0);
}
