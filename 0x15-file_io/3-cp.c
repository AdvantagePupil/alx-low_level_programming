#include "main.h"

/**
 * main - Entry point
 *
 * description: program that copies the content of a file to another file
 *
 * @argc: num
 *
 * @argv: string
 *
 * Return: the file witht the copied content
 */

int main(int argc, char *argv[])
{
	FILE *file_from, *file_to;

	int i;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = fopen(argv[1], "r");

	if (file_from == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = fopen(argv[2], "w");

	if (file_to == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		fclose(file_from);
		exit(99);
	}

	i = fgetc(file_from);
	while (i != EOF)
	{
		fputc(i, file_to);
		i = fgetc(file_from);
	}

	fclose(file_from);
	fclose(file_to);

	return (0);
}
