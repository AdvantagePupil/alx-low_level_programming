#include "main.h"

/**
 * read_textfile - Entry point
 *
 * description: reads a text file and prints it to the POSIX stout
 *
 * @filename: file name
 *
 * @letters: letters
 *
 * Return: reads text and print it
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;

	ssize_t i;

	ssize_t j;

	ssize_t x;

	i = open(filename, O_RDONLY);

	if (i == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);

	x = read(i, buff, letters);

	j = write(STDOUT_FILENO, buff, x);

	free(buff);

	close(i);

	return (j);
}
