#include "main.h"

/**
 * creates_buffer - Entry point
 *
 * descriptuon: allocates 1024 bytes for a buffer.
 *
 * @file: file.
 *
 * Return: A pointer to buffer.
 */

char *creates_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Entry point.
 *
 * description: Closes file descriptors.
 *
 * @x: file descriptor.
 *
 * Retrun: always 0 (success)
 */
void close_file(int x)
{
	int i;

	i = close(x);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);

		exit(100);
	}
}

/**
 * main - Entry point.
 *
 * @argc: argc.
 *
 * @argv: argv.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int from, to, i, j;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = creates_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	i = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || i == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		j = write(to, buffer, i);
		if (to == -1 || j == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		i = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (i > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
