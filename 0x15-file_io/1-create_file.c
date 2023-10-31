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
	FILE *file;

	if (!filename)
	{
		return (0);
	}

	file = fopen(filename, "w");

	if (file == NULL)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}

	fclose(file);
	return (1);

}
