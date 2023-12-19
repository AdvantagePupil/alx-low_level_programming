#include "main.h"

/**
 * append_text_to_file - Entry point
 *
 * description: function that appends text at the end of a file
 *
 * @filename: filename
 *
 * @text_content: text content
 *
 * Return: Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
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
		for (len = 0; text_content[len]; len++)
		{
			;
		}
	}

	i = open(filename, O_WRONLY | O_APPEND);

	j = write(i, text_content, len);

	if (i == -1 || j == -1)
	{
		return (-1);
	}

	close(i);

	return (1);
}
