#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - check the code
 *
 * @filename: var
 * @text_content: var
 *
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	file = open(filename, O_WRONLY | O_APPEND);
	write(file, text_content, strlen(text_content));

	return (1);
}
