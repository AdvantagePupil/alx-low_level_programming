#include "main.h"

/**
 * create_file - Entry point
 *
 * description: a function that creates a file.
 *
 * @filename: pointer
 *
 * @text_content: pointer
 *
 * Return: creates a file
 */

int create_file(const char *filename, char *text_content)
{
	int i;
	int j;
	int n;

	n = 0;

	if (!filename)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (n = 0; text_content[n];)
		{
			n++;
		}
	}

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	j = write(i, text_content, n);

	if (i == -1 || j == -1)
	{
		return (-1);
	}

	close(i);
	return (1);

}
