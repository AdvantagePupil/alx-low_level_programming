#include "main.h"

/**
* main - Entry point
*
* positive_or_negative.c Description: to check if a number is pos or neg
*
* @i: is a number (integer)
*
* Return: always 0 (success)
*/

void positive_or_negative(int i)
{
	if (i < 0)
	{
	printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
	printf("%d is %s\n", i, "positive");
	}
	else
	{
	printf("%d is %s\n", i, "zero");
	}
	return;
}
