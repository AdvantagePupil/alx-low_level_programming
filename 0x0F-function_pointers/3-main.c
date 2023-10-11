#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * description: calculator
 *
 * @argc: count
 *
 * @argv: vector
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int (*op_func)(int,int), n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	op_func = get_op_func(argv[2]);
	n2 = atoi(argv[3]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	if (!n2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_func(n1, n2));

	return (0);
}
