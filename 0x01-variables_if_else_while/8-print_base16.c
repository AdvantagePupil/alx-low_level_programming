#include <stdio.h>

/**
 * main - entry point
 *
 * description: a c program that prints all the numbers of base 16 in lowercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ch;

	char num;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}

	for (num = 'a' ; num <= 'f' ; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
