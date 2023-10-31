#include "main.h"

/**
 * read_textfile - Entry point
 *
 * description: reads a text file and prints it to the POSIX
 *
 * @filename: filename
 *
 * @letters: numbers of letters printed
 *
 * Return: when fail 0 (success)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t n;
	ssize_t j;
	char *x;

	if (!filename)
	{
		return (0);
	}

	i = open(filename, O_RDONLY);

	if (i == -1)
	{
		return (0);
	}

	x = malloc(sizeof(char) * (letters));

	if (!x)
	{
		return (0);
	}
	n = read(i, x,letters);

	j = write(STDOUT_FILENO, x, n);

	close(i);

	free(x);

	return (j);
}
