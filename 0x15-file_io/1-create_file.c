#include "main.h"

/**
 * create_file - Entry point
 *
 * description: Create a function that creates a file.
 *
 * @filename: filename
 *
 * @text_content: the text content
 *
 * Return: Returns: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0;

	int j = 0;

	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	j = write(i, text_content, len);

	if (i == -1 || j == -1)
	{
		return (-1);
	}

	close(i);

	return (1);
}
