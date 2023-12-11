#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - check the code
 *
 * @filename: var
 * @text_content: var
 *
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int number_of_letters = sizeof(text_content);
	int new_file;

	if (!filename)
		return (-1);

	new_file = open(filename, O_CREAT | O_WRONLY, 0644);
	if (new_file == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	write(new_file, text_content, number_of_letters);

	close(new_file);
	return (1);
}
