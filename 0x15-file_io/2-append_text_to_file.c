#include "main.h"

/**
 * append_text_to_file - Entry point
 *
 * description: a function that appends text at the end of a file.
 *
 * @filename: pointer
 *
 * @text_content: pointer
 *
 * Return: a file with appended text at the end
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (!filename)
	{
		return (-1);
	}

	file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-1);
	}

	if (text_content)
	{
		if (fputs(text_content, file) == EOF)
		{
			fclose(file);
			return (-1);
		}
	}

	fclose(file);

	return (1);
}
