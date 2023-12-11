#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - check the code
 *
 * @filename: var
 * @letters: var
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, l, w;
	char *text;

	text = malloc(letters);
	if (!text || !filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(text);
		return (0);
	}

	l = read(fd, text, letters);
	w = write(STDOUT_FILENO, text, l);

	close(fd);
	return (w);
}
